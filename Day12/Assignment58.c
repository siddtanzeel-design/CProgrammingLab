#include <stdio.h>

struct Height 
{
    int feet;
    int inches;
};
struct Height add(struct Height h1, struct Height h2) 
{
    struct Height sum;
    sum.inches = h1.inches + h2.inches;
    sum.feet = h1.feet + h2.feet + (sum.inches / 12);
    sum.inches = sum.inches % 12;
    return sum;
}
int main() 
{
    struct Height h1, h2, result;
    printf("Enter first height (feet inches): ");
    scanf("%d %d", &h1.feet, &h1.inches);
    printf("Enter second height (feet inches): ");
    scanf("%d %d", &h2.feet, &h2.inches);
    result = add(h1, h2);
    printf("Total Height = %d feet %d inches\n", result.feet, result.inches);
    return 0;
}