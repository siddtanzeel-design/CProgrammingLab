#include <stdio.h>
#include <math.h>
int main()
{
    double p,r,t,amt,ci;
    printf("Enter Principle Amount:- ");
    scanf("%lf",&p);
    printf("Enter Rate:- ");
    scanf("%lf",&r);
    printf("Enter Time:- ");
    scanf("%lf",&t);
    amt=p*pow((1+r/100),t);
    ci=amt-p;
    printf("\nCompound Interest = %.2lf",ci);
    printf("\nTotal Amount:- %.2lf",amt);
    return 0;
}