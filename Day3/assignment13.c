#include<stdio.h>
int main()
{
    float l,b,a,p;
    printf("Enter the length of the Rectangle:- ");
    scanf("%f",&l);
    printf("Enter the breadth of the Rectangle:- ");
    scanf("%f",&b);
    a=l*b;
    p=2*(l+b);
    printf("\nArea = %f",a);
    printf("\nPerimeter = %f",p);
}