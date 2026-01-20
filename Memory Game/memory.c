#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main () {
	int score=0,x=0;
	char choice;
	system("cls");
	srand(time(NULL));

	int n = 1000;
	int arr[n];

	for (int i = 0; i < n; i++) {
		int array[i+1];
		arr[i] = rand() % 10;

		printf("\t%d  ", arr[i]);

		Sleep(400);
		system("cls");
        printf("Enter The Sequence: \n");
		for(int k = 0; k <= i; k++) {
			scanf("%d", &array[k]);
		}
		for (int l = 0; l <= i; l++)
		{
			if(array[l] != arr[l]) {
				x=1;
			}
		}
		if(x==1) {
			printf("Wrong :(\n");
            printf("The Correct Sequence was: ");
            for (int m=0; m<=i; m++) {
                printf("%d ", arr[m]);
            }
            printf("\n");
            printf("\tScore: %d\n", score);
			printf("\nDo you want to play again? (y/n): ");
			scanf(" %c", &choice);
			if (choice == 'y' || choice == 'Y') {
				main();
			}
			else if (choice == 'n' || choice == 'N') {
				printf("Thank you for playing!\n");
			}
			else {
				printf("Invalid choice! Exiting the game.\n");
			}
			return 0;
		}
		else {
			printf("Correct !!");
            score++;
			Sleep(1000);
			system("cls");
		}
	}

	return 0;
}
