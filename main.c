#include <stdio.h>
int main(void) {
    char operator; //*here we declared operators which are characters that can be used in mathematical calculations
    double number1, number2, result; //*here we are declaring variables*//

    printf("enter an operator (+, -, *, /): ");//*here you are requesting a user to enter an operator
    scanf("%c", &operator); //*the user enters the operator of choice

    printf("enter two numbers: ");
    scanf("%lf %lf", &number1, &number2); //*the user enters the two numbers of choice

    switch (operator) {
        case '+':  //* in the case the user inputs the addition operator the result will be the summation of the two numbers*//
            result = number1 + number2;
        printf("addition of two numbers is %.2lf\n", result);
        break;

        case '-':
            result = number1 - number2;
        printf("subtraction of two numbers is %.2lf\n", result);
        break;

        case '*':
            result = number1 * number2;
        printf("multiplication of two numbers is %.2lf\n", result);
        break;

        case '/':
            result = number1 / number2;
        printf("division of two numbers is %.2lf\n", result);
        break;
    }

return 0;
}