#include <stdio.h>
int main() 
{
    int n = 4;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 1; j <= n - i; j++) 
        {
            printf("%d", j);
        }
        if (i == 0) 
        {
            for (int j = n - 1; j >= 1; j--) 
            {
                printf("%d", j);
            }
        } 
        else 
        {
            for (int s = 0; s < 2 * i - 1; s++) 
            {
                printf(" ");
            }
            for (int j = n - i; j >= 1; j--) 
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
