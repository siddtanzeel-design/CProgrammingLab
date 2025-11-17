#include <stdio.h>

struct Complex 
{
    float real;
    float imaginary;
};

struct Complex add(struct Complex a, struct Complex b) 
{
    struct Complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}
int main() 
{
    struct Complex n1, n2, sum;
    printf("Enter real and imaginary part of first number: ");
    scanf("%f %f", &n1.real, &n1.imaginary);
    printf("Enter real and imaginary part of second number: ");
    scanf("%f %f", &n2.real, &n2.imaginary);
    sum = add(n1, n2);
    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);
    return 0;
}