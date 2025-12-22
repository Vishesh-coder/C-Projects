#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int user;
    char continue_game;
    srand(time(NULL));
    int bot = (rand() % 3) + 1;

    do {
        printf("\n----- Rock, Paper, Scissors - Shoot! -----\n");
        printf("Choose an Option:\n1. Rock\n2. Paper\n3. Scissors\nEnter your choice (1-3): ");
        scanf("%d", &user);
        if (user < 1 || user > 3) {
            printf("\nInvalid input! Please try again.\n");
        }
    } while (user < 1 || user > 3);

    switch(user) {
        case 1:
            printf("You chose Rock.\n");
            break;
        case 2:
            printf("You chose Paper.\n");
            break;
        case 3:
            printf("You chose Scissors.\n");
            break;
    }

    switch (bot) {
        case 1:
            printf("Bot chose Rock.\n");
            break;
        case 2:
            printf("Bot chose Paper.\n");
            break;
        case 3:
            printf("Bot chose Scissors.\n");
            break;
    }

    if(user == bot) {
        printf("\tIt's a tie!\n");
    } 
    else if ((user == 1 && bot == 3) || (user == 2 && bot == 1) || (user == 3 && bot == 2)) {
        printf("\tYou win!\n");
    } 
    else {
        printf("\tBot wins!\n");
    }

    printf("Do you want to play again? (Y/N): ");
    scanf(" %c", &continue_game);
    if(continue_game == 'Y' || continue_game == 'y') {
        main();
    } 
    else if(continue_game == 'N' || continue_game == 'n') {
        printf("Thanks for playing!\n");
    }
    else {
        printf("Invalid input! Exiting the game.\n");
    }

    return 0;
}