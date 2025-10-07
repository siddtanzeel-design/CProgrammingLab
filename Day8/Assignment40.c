#include<stdio.h>
int main()
{
    int n, choice;
    printf("Enter a number:- ");
    scanf("%d", &n);
    printf("1.Check if the number is a Buzz number or not\n");
    printf("2.Check if the number is odd or even\n");
    printf("3.Check if the number is positive or negative\n");
    printf("Enter your Choice(1, 2, 3)");
    scanf("%d", &choice);
    if(choice == 1)
    {
        if(n%7==0 || n%10==7)
            printf("%d is a Buzz number", n);
        else
            printf("Not a Buzz number");
    }
    else if(choice == 2)
    {
        if(n%2==0)
            printf("%d is even number", n);
        else    
            printf("%d is a odd number", n);
    }
    else if(choice == 3)
    {
        if(n>0)
            printf("%d is a Positive number", n);
        else
            printf("%d is a Negative number", n);
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}