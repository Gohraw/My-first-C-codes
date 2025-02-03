#include <stdio.h>

int main() {
    float num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Compare the two numbers and print the larger one
    if (num1 > num2) {
        printf("The larger number is: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("The larger number is: %.2f\n", num2);
    } else {
        printf("Both numbers are equal: %.2f\n", num1);
    }

    return 0;
}