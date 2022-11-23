#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int  main()
{
    int a, b, sum = 0;

    printf("enter the number : \n");
    scanf("%d", &b);

    for (a = 0; a < b; a++)
    {
        if (a % 2 == 0)
        continue;
        sum = sum + a;
    }

    printf("sum = %d", sum);
    
    return 0;
}