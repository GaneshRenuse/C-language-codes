#include <stdio.h>
#include <math.h>

int main()  
{
    int x[10], y[10];
    int n, i, j, sumx = 0, sumy = 0;
    int sumx2 = 0, sumy2 = 0, sumxy = 0;

    
    printf("Enter the size of N : ");
    scanf("%d", &n);

    printf("Enter the values for X : ");
    for (i = 0; i < n; i++);
    {
        scanf("%d", &x[i]);
        sumx += x[i];
        sumx2 = sumx2 + x[i] * x[i];
    }
    printf("Enter the values for Y : ");
    for (j = 0; j < n; j++);
    {
        scanf("%d", &y[j]);
        sumy += y[j];
        sumy2 = sumy2 + y[j] * y[j];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            sumxy = sumxy + x[i] * y[j];
        }
    }
    

    int xdash = sumx / n;
    int ydash = sumy / n;

    printf("x bar = %d\n", xdash);
    printf("y bar = %d\n", ydash);
    printf("sum of x2 = %d\n", sumx2);
    printf("sum of y2 = %d\n", sumy2);
    printf("sum of xy = %d\n", sumxy);

    return 0;
}