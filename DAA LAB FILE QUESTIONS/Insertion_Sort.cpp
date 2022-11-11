#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int tmp = arr[i];
        int j = i - 1;
        while (tmp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = tmp;
    }
}
int main()
{
    int arr[] = {8, 9, 4, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("TUSHAR GAHTORI\n1000015098\n");
    printf("Elements before sorting:\n");
    display(arr, n);
    insertionSort(arr, n);
    printf("Elements after sorting:\n");
    display(arr, n);
}
