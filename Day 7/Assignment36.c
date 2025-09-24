#include <stdio.h>
int main()
{
    char ch = 'A';
    for(int i = 1; i <= 4; i++)
    {
        for(int j = i; j <4; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }
    return 0;
}