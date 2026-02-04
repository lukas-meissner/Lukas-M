#include <stdio.h>

int main(){
    float num1, num2, result;
    char operation;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Choose the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
        result = num1 + num2;
        printf("The result of %.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    
        case '-':
        result = num1 - num2;
        printf("The result of %.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    
        case '*':
        result = num1 * num2;
        printf("The result of %.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    
        case '/':
         if (num2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            result = num1 / num2;
            printf("The result of %.2f / %.2f = %.2f\n", num1, num2, result);
        }
        break;

        default:
        printf("Error: Invalid operation.\n");
    }

    return 0;
}