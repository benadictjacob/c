#include <stdio.h>

// Define a structure for complex numbers
struct Complex
{
    double real;
    double imaginary;
};

// Function to add two complex numbers
void addComplex(struct Complex num1, struct Complex num2)
{
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    printf("Sum: %.lf + %.lfi\n", sum.real, sum.imaginary);
}

int main()
{
    struct Complex num1, num2;

    // Input for the first complex number
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%lf %lf", &num1.real, &num1.imaginary);

    // Input for the second complex number
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%lf %lf", &num2.real, &num2.imaginary);
    addComplex(num1, num2);

    return 0;
}