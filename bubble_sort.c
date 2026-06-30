#include <stdio.h>

int main(void)
{
    int foday[] = {20, 18, 16, 14, 12, 8, 4, 2, 1, 3, 5, 7, 9, 15, 19, 11, 10, 6, 13, 17};
    int n = 20;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        if (foday[j] > foday[j + 1])
        {
            int temp = foday[j];
            foday[j] = foday[j + 1];
            foday[j + 1] = temp;
        }
    }
    printf("The sorted numbers are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", foday[i]);
    }
    printf("\n");
}