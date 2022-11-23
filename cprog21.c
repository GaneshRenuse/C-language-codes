#include <stdio.h>
#include <math.h>

int main()  
{
    int n, x[100];
    int y[100];

    printf("enter the value of n : ");
    scanf("%d", &n);

    printf("enter values for x : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("enter values for y : \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }

    return 0;
}