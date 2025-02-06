#include <stdio.h>

int main() {
    float num1, num2, product;

    // Taking input
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &num1, &num2);

    // Calculating product
    product = num1 * num2;

    // Printing the result
    printf("Product: %.2f\n", product);

    return 0;
}