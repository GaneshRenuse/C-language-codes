#include <stdio.h>

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[7] = {23, 6, 18, 29, 27, 4, 13};
    int n = sizeof(a) / sizeof(a[0]);
    printf("before sorting array elements are - \n");
    print(a, n);
    bubble(a, n);
    printf("\nafter sorting array elements are - \n");
    print(a, n);

    return 0;
}