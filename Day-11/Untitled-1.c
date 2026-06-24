#include <stdio.h>

/* Function declaration */
int findSum(int num1, int num2);

int main() {
    int number1, number2, sum;

    /* Prompt the user for input */
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    /* Call the function and store the returned value */
    sum = findSum(number1, number2);

    /* Display the final result */
    printf("The sum of %d and %d is: %d\n", number1, number2, sum);

    return 0;
}

/* Function definition to calculate the sum */
int findSum(int num1, int num2) {
    return num1 + num2;
}
