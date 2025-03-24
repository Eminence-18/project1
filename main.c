#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int number1, number2, add, sub, mult, div, mod;
    char operation;

    printf("Enter  number 1: ");
    scanf("%d", &number1);

    printf("Enter  number 2: ");
    scanf("%d", &number2);

    printf("Enter operation: ");
    scanf(" %c", &operation);

    switch (operation)

    {
        case '+':
            add = number1 + number2;
        printf("Addition of two numbers: %d\n", add);
        break;

        case '-':
            sub = number1 - number2;
        printf("Subtraction of two numbers: %d\n", sub);
        break;

        case '*':
            mult = number1 * number2;
        printf("Multiplication of two numbers: %d\n", mult);
        break;

        case '/':
            div = number1 / number2;
        printf("Division of two numbers: %d\n", div);
        break;

        case '%':
            mod = number1 % number2;
        printf("Modulo of two numbers: %d\n", mod);
        break;
    }

    add = number1 + number2;
    sub = number1 - number2;
    mult = number1 * number2;
    div = number1 / number2;
    mod = number1 % number2;

    return 0;
}