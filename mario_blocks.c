#include <stdio.h>

const n = 4

int main(void)
{
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}