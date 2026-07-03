#include <stdio.h>

int main(void)
{
    int foday[] = {5,10, 15, 20, 2, 4, 6, 8, 3, 7, 9, 1, 18, 16, 14, 12, 13, 17, 19, 11};
    int n = 20;
    for (int i = 0; i < n -1; i++)
    {
        int smallest_number = i;
        for (int j = i + 1; j < n; j++)
        {  
        if (foday[j] < foday[smallest_number])
        
            smallest_number = j;
        }
    
    int temp = foday[i];
    foday[i] = foday[smallest_number];
    foday[smallest_number] = temp;
    }
     printf("The sorted numbers are: ");
    for (int i = 0; i < n; i++)
   
    {    
      printf("%i ", foday[i]);
    }
    printf("\n");
}