#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int num, highlow;
    char guess, choice;
    srand(time(NULL));
    num = (rand() % 100) + 1;
    highlow = (rand() % 100) + 1;

    do{
        printf("\n\t------ High Low Game ------\n");
        printf("I just chose a secret number between (1-100)\n");
        printf("Is the secret number higher or lower than %d ?\n", highlow);
        printf("Enter H for high, L for Low, J for Jackpot: ");
        scanf(" %c", &guess);

        if (guess != 'h' && guess != 'H' && guess != 'l' && guess != 'L' && guess != 'j' && guess != 'J'){
            printf("Enter a Valid Choice !\n");
        }

    } while (guess != 'h' && guess != 'H' && guess != 'l' && guess != 'L' && guess != 'j' && guess != 'J');

    if(num > highlow && (guess == 'h' || guess == 'H')){
        printf("You Won! The Number was %d \n", num);
    }
    else if (num < highlow && (guess == 'l' || guess == 'L')){
        printf("You Won! The Number was %d ", num);
    }
    else if (num == highlow && (guess == 'j' || guess == 'J')){
        printf("You Won! The Number was %d \n", num);
    }
    else{
        printf("You Lost! The Number was %d \n", num);
    }

    printf("\nDo you want to play again? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        main();
    }
    else if (choice == 'n' || choice == 'N'){
        printf("Thank you for playing!\n");
    }
    else{
        printf("Invalid choice! Exiting the game.\n");
    }

    return 0;
}