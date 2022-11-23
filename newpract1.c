#include <conio.h>
#include <stdio.h>

void minmax(int arr[], int n)
{
    int i, min, max;
    min = max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    printf("minimum of array is : %d", min);
    printf("\nmaximum of array is : %d", max);
}

int main()
{
    int a[1000], i, n, min, max;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    minmax(a, n);

    /* 
    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    printf("minimum of array is : %d", min);
    printf("\nmaximum of array is : %d", max);
    */

    return 0;
}