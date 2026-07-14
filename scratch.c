#include <stdio.h>
void merge_sort(int array[], int left, int right);
void merge(int array[], int left, int mid, int right);
int main(void)
{
    int foday[] = {9, 4, 2, 7, 1, 5, 2, 8, 3, 10};
    int n = 10;

    merge_sort(foday, 0, n - 1);

    printf("The sorted numbers are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", foday[i]);
        
    }
    printf("\n");
    return 0;
}
    merge_sort(int array[], int left, int right)
    {

    }
    merge(int array[], int left, int mid, int right)
    {
        
    }

