#include <stdio.h>
void merge_sort(int array[], int left, int right);
void merge(int array[], int left, int mid, int right);

int main(void)
{ 
int foday[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int n = 20;

merge_sort(foday, 0, n - 1);

printf("The sorted numbers are: ");
for (int i = 0; i < n; i++)
{    
    printf("%i ", foday[i]);
}
printf("\n");
return 0;
}
void merge_sort(int array[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    int mid = left + (right - left) / 2;
     merge_sort(array, left, mid);
     merge_sort(array, mid + 1, right);
     merge(array, left, mid, right );
}
void merge(int array[], int left, int mid, int right)
{

int n1 = mid - left + 1;
int n2 = right - mid;
}