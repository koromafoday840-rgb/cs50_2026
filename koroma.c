#include <stdio.h>  // I Use this (standard) instead of cs50.h

int main(void)
{
    char f;
    printf("Will you come tomorrow? (y/n): ");
    
    // I use scanf instead of get_char when working offline
    scanf(" %c", &f); 

    if (f == 'y')
    {
        printf("Agreement reached\n");
    }
    else
    {
        printf("Agreement declined\n");
    }
    return 0;
}