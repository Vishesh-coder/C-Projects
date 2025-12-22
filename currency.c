#include <stdio.h>

int main (){
    int opt1, opt2, amt;
    char choice;
    do{
        printf("\n------Currency Converter------\n");
        printf("\nChoose the currency to be converted: \n");
        printf("1. USD\n");
        printf("2. INR\n");
        printf("3. EUR\n");
        printf("4. GBP\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &opt1);
        if ((opt1 < 1 || opt1 > 4)) {
            printf("Invalid choice! \n");
            continue;
        }
        printf("\nChoose the currency to convert to: \n");
        printf("1. USD\n");
        printf("2. INR\n");
        printf("3. EUR\n");
        printf("4. GBP\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &opt2);

        if((opt2 < 1 || opt2 > 4)) {
            printf("Invalid choice! \n");
            continue;
        }

        else if(opt1 == opt2 ){
            printf("Both currencies are same! \n");
        }

    }while((opt1 < 1 || opt1 > 4) || (opt2 < 1 || opt2 > 4) || (opt1 == opt2));

    if(opt1 == 1 && opt2 == 2){
        printf("Enter Amount in USD: ");
        scanf("%d", &amt);
        printf("Amount in INR: %.2f\n", amt * 89.36);
    }
    else if(opt1 == 2 && opt2 == 1){
        printf("Enter Amount in INR: ");
        scanf("%d", &amt);
        printf("Amount in USD: %.2f\n", amt / 89.36);
    }
    else if(opt1 == 3 && opt2 == 2){
        printf("Enter Amount in EUR: ");
        scanf("%d", &amt);
        printf("Amount in INR: %.2f\n", amt * 103.44);
    }
    else if(opt1 == 2 && opt2 == 3){
        printf("Enter Amount in INR: ");
        scanf("%d", &amt);
        printf("Amount in EUR: %.2f\n", amt / 103.44);
    }
    else if(opt1 == 3 && opt2 == 1){
        printf("Enter Amount in EUR: ");
        scanf("%d", &amt);
        printf("Amount in USD: %.2f\n", amt * 1.16);
    }
    else if(opt1 == 1 && opt2 == 3){
        printf("Enter Amount in USD: ");
        scanf("%d", &amt);
        printf("Amount in EUR: %.2f\n", amt / 1.16);
    }
    else if(opt1 == 4 && opt2 == 1){
        printf("Enter Amount in GBP: ");
        scanf("%d", &amt);
        printf("Amount in USD: %.2f\n", amt * 1.33);
    }
    else if(opt1 == 1 && opt2 == 4){
        printf("Enter Amount in USD: ");
        scanf("%d", &amt);
        printf("Amount in GBP: %.2f\n", amt / 1.33);
    }
    else if(opt1 == 4 && opt2 == 2){
        printf("Enter Amount in GBP: ");
        scanf("%d", &amt);
        printf("Amount in INR: %.2f\n", amt * 118.25);
    }
    else if(opt1 == 2 && opt2 == 4){
        printf("Enter Amount in INR: ");
        scanf("%d", &amt);
        printf("Amount in GBP: %.2f\n", amt / 118.25);
    }
    else if(opt1 == 4 && opt2 == 3){
        printf("Enter Amount in GBP: ");
        scanf("%d", &amt);
        printf("Amount in EUR: %.2f\n", amt * 1.14);
    }
    else if(opt1 == 3 && opt2 == 4){
        printf("Enter Amount in EUR: ");
        scanf("%d", &amt);
        printf("Amount in GBP: %.2f\n", amt / 1.14);
    }

    printf("\nConvert any other currency ? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        main();
    }
    else if (choice == 'n' || choice == 'N') {
        printf("Exited !\n");
    }
    else {
        printf("Invalid choice! Exiting the converter.\n");
    }

    return 0;
}