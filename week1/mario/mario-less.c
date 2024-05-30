#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get height
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print the pyramid
    for (int i = 0; i < height; i++)
    {
        // Print the spaces
        for (int j = height; j > i + 1; j--)
        {
            printf(" ");
        }

        // Print the hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
