#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void maxint(int a, int b, int c, int d)
{
    if (a >= b && a >= c && a >= d)
        printf("%d\n", a);
    else if (b >= a && b >= c && b >= d)
        printf("%d\n", b);
    else if (c >= a && c >= b && c >= d)
        printf("%d\n", c);
    else
        printf("%d\n", d);
}

int main()
{
	
    int a, b, c, d;
    printf("enter 4 values : \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    /*
    if (a >= b && a >= c && a >= d)
        printf("%d\n", a);
    else if (b >= a && b >= c && b >= d)
        printf("%d\n", b);
    else if (c >= a && c >= b && c >= d)
        printf("%d\n", c);
    else
        printf("%d\n", d);
    */
    printf("\nbiggest value is : ");
    maxint(a, b, c, d);

    return 0;
}