#include <stdio.h>

int main() {
    char choice;
    int num1, num2;

    while(1) {
        printf("\nCalculator Menu:\n");
        printf("A - Addition\n");
        printf("B - Subtraction\n");
        printf("C - Multiplication\n");
        printf("D - Division\n");
        printf("E - Modulus\n");
        printf("Q - Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case 'A':
            case 'a':
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                printf("%d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case 'B':
            case 'b':
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                printf("%d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case 'C':
            case 'c':
                printf("Enter first number: ");
                scanf("%d", &num1);
                printf("Enter second number: ");
                scanf("%d", &num2);
                printf("%d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case 'D':
            case 'd':
                printf("Enter dividend: ");
                scanf("%d", &num1);
                printf("Enter divisor: ");
                scanf("%d", &num2);

                
                if(num2 != 0) {
                    printf("%d / %d = %d\n", num1, num2, num1 / num2);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            case 'E':
            case 'e':
                printf("Enter dividend: ");
                scanf("%d", &num1);
                printf("Enter divisor: ");
                scanf("%d", &num2);
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
                break;
            case 'Q':
            case 'q':
                printf("Exiting \n");
                return 0; // Exit the program
            default:
                printf("Please enter the correct character from the menu.\n");
        }

        char cont;
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &cont);
        if(cont == 'N' || cont == 'n') {
            break;
        }
    }

    return 0;
}
