#include <stdio.h>
int main() {
    char op, choice;
    float a, b;
    do{
        printf("Select Operation ( + | - | x | / ): ");
        scanf(" %c", &op);
        if(op!='+' && op!='-' && op!='x' && op!='/'){
            printf("Invalid operation. Please try again.\n");
            continue;
        }
        printf("Enter any two numbers: \n");
        printf("First number: ");
        scanf("%f", &a);
        printf("Second number: ");
        scanf("%f", &b);
    } while(op!='+' && op!='-' && op!='x' && op!='/');

    switch (op)
    {
    case '+':
        printf(" %.2f + %.2f = %.3f\n", a, b, a + b);
        break;
    case '-':
        printf(" %.2f - %.2f = %.3f\n", a, b, a - b);
        break;
    case 'x':
        printf(" %.2f x %.2f = %.3f\n", a, b, a * b);
        break;
    case '/':
        if (b != 0)
            printf(" %.2f / %.2f = %.3f\n", a, b, a / b);
        else
            printf("Not possible\n");
        break;
    }

    printf("\nDo you want to calculate something else ? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y'){
        main();
    }
    else if (choice == 'n' || choice == 'N'){
        printf("Exiting...\n");
    }
    else{
        printf("Invalid choice! Exiting the calculator...\n");
    }

    return 0;
}
