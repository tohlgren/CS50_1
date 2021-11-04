#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for input
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //Create output with hashes
    for (int i = 0; i < n; i++)
    {
        for (int k = i - n - 1; k > 0; k--)
        {
            printf(" ");
        }
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }
        printf("\n");
    }

}
