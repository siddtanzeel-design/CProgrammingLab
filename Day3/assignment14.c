#include <stdio.h>
#include <math.h>
int main()
{
    float pn,nn,c,c1,f,f1;
    printf("Enter a positive number:- ");
    scanf("%f",&pn);
    printf("Enter a negative number:- ");
    scanf("%f",&nn);
    c=ceil(pn);
    c1=ceil(nn);
    f=floor(pn);
    f1=floor(nn);
    printf("ceiling value for positive number:%f",c);
    printf("\nceiling value for negative number:%f",c1);
    printf("\nfloor value for positive numbeer:%f",f);
    printf("\nfloor value for negative number:%f",f1);
    return 0;
}