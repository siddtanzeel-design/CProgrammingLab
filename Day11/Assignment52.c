//Find the sum of first 10 natural numbers using function

#include<stdio.h>
int sumofNumbers(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n=10;
    int r=sumofNumbers(n);
    printf("Sum of first %d natural numbers = %d", n, r);
    return 0;
}