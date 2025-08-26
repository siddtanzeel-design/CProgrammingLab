#include <stdio.h>
int main()
{
    int a,ld;
    printf("Enter the value of a:- ");
    scanf("%d",&a);
    ld=a-(a/10)*10;
    printf("Without using the modulus operator");
    printf("\nLast digit:%d",ld);
    printf("\nEnter value for a:- ");
    scanf("%d",&a);
    ld=a%10;
    printf("Using modulus operator:-%d",ld);
    return 0;
}