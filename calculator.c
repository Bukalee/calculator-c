#include <stdio.h>
#include <string.h>

int main() {

    char symbol[5];
    float num1, num2;

    printf("\nWelcome to the calcultor!");

    while(1) {

        printf("\n\nSelect the operator (+, -, *, /, \"exit to close\"):");
        scanf("%4s", &symbol);

        if (strcmp(symbol, "exit") == 0)
        {
            printf("Program terminated by user...");
            break;
        }
        
        printf("Enter two numbers:");
        scanf("%f %f", &num1, &num2);

        switch(*symbol) {

        case '+': printf("Summation of the two numbers is %f", num1+num2);
            break;
        case '-': printf("Subtraction of the two numbers is %f", num1-num2);
            break;
        case '*': printf("Multiplication of the two numbers is %f", num1*num2);
            break;
        case '/': printf("Division of the two numbers is %f", num1/num2);
            break;

        default: printf("There is no such operator");
            break;
        }
    }


    return 0;
}