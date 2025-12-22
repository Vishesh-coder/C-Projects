#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int num, guess, tries=0;
    char choice;
    srand(time(NULL));
    num = (rand() % 100) + 1;

    do{
        printf("\n------ GUESS THE NUMBER ------\n");
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);
        tries++;

        if (guess < 1 || guess > 100){
            printf("Invalid number !\n");
        }
        else if(guess < num){
            printf("Number is Higher\n");
        }
        else if (guess > num)
        {
            printf("Number is Lower\n");
        }
    } while (guess < 1 || guess > 100 || guess != num);

    if(guess == num){
        printf("\nCongrats!! You guessed the number %d in %d tries !\n", num, tries);
    }

    printf("\nDo you want to play again? (y/n): ");
    scanf(" %c", &choice);
    if(choice == 'y' || choice == 'Y'){
        main();
    }
    else if(choice == 'n' || choice == 'N'){
        printf("Thank you for playing!\n");
    }
    else{
        printf("Invalid choice! Exiting the game.\n");
    }
    
    return 0;
}