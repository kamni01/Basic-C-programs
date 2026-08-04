#include <stdio.h>
void namaste();
void bonjour();
int main()
{
    char ch;
     printf("Enter i for Indian and f for French: ");
    scanf(" %c", &ch);
    if (ch == 'i')
    {
        namaste();
    }
    else if (ch == 'f')
    {
        bonjour();
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}

void namaste()
{
    printf("NAMASTE\n");
}

void bonjour()
{
    printf("BONJOUR\n");
}