#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:- ");
    scanf("%d", &age);
    switch(age >= 18)
    {
        case 1:
            printf("You are Eligible to vote");
            break;
        case 0:
            printf("You are not Eligible to vote");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}