#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float deposit(float balance) {
    float amount;
    do
    {
        printf("Enter amount to deposit: $");
        scanf("%f", &amount);
        if(amount < 0 ){
            printf("Enter Valid Amount\n");
        }
        else{
            balance += amount;
            printf("Successfully deposited $%.2f\n", amount);
        }
    } while (amount < 0);
    
    return balance;
}

float withdraw(float balance) {
    float amount;
    do
    {
        printf("Enter amount to withdraw: $");
        scanf("%f", &amount);
        if(amount < 0 ){
            printf("Enter Valid Amount\n");
        }
        else if(amount > balance){
            printf("Insufficient Balance\n");
        }
        else{
            balance -= amount;
            printf("Successfully withdrew $%.2f\n", amount);
        }
    } while (amount < 0 || amount > balance);
    
    return balance;
}

int main() {
    float balance = 0.0f;
    int choice, dep=0, with=0;
    long long int acc_no;
    char name[100];

    srand(time(NULL));
    acc_no = (rand() * rand()) % 9000000000 + 1000000000;

    printf("Enter your Name: ");
    scanf("%[^\n]", name);
    printf("Welcome to the bank, Mr. %s!\n", name);
    
    do{
        printf("\n----- Bank Menu -----\n");
        printf("Choose an Operation:\n");
        printf(" 1. Account Details\n 2. Check Balance\n 3. Deposit Money\n 4. Withdraw Money\n 5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nAccount Holder: %s\n", name);
                printf("Account Number: %ld\n", acc_no);
                printf("Number of Deposits Made: %d\n", dep);
                printf("Number of Withdrawals Made: %d\n", with);
                break;

            case 2:
                printf("Your current balance is: $%.2f\n", balance);
                break;
        
            case 3:
                balance = deposit(balance);
                dep++;
                break;

            case 4:
                balance = withdraw(balance);
                with++;
                break;

            case 5:
                printf("Thank you for using the bank !\n");
                break;

            default:
                printf("\nInvalid input! Please try again.\n");
                break;
        }
    } while (choice != 5);
    
    return 0;
}
    
