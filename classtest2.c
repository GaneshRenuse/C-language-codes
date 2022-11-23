#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,2,5,6,2,8,2,10};
    int a, count = 0;

    printf("enter a number : ");
    scanf("%d", &a);

    for (int i = 0; i <= 9; i++)
    {
        if (arr[i] == a)
        {
            count++;
        }
    }
    printf("occurence of the 2 in the array is : %d", count);

    return 0;
}