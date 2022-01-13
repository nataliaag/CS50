#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //ask user a number between 1 and 8
        n = get_int("height: ");
    }
    while (n < 1 || n > 8);


    for (int i = 1; i <= n; i++)
    {
        //print left spaces
        for (int j = 1 + i; j <= n; j++)
        {
            printf(" ");
        }
        //print left hashes
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        //print gaps
        for (int y = 1 + i; y >= i; y--)
        {
            printf(" ");
        }
        //print right hashes and then a new line
        for (int y = 1; y <= i; y++)
        {
            printf("#");
        }
        {
            printf("\n");
        }
    }
}
