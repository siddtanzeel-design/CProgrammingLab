#include <stdio.h>

struct Book 
{
    int id;
    char name[100];
    float price;
};

int main() 
{
    struct Book books[10];
    int i;
    printf("Enter details of 10 books:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("\nBook %d ID: ", i + 1);
        scanf("%d", &books[i].id);

        printf("Book %d Name: ", i + 1);
        scanf(" %[^\n]", books[i].name);

        printf("Book %d Price: ", i + 1);
        scanf("%f", &books[i].price);
    }

    printf("\n\n--- Book Inventory ---\n");
    printf("No.\tID\tName\t\tPrice\n");

    for (i = 0; i < 10; i++) 
    {
        printf("%d\t%d\t%s\t%.2f\n",
               i + 1,
               books[i].id,
               books[i].name,
               books[i].price);
    }
    return 0;
}