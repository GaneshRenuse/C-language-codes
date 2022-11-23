#include <stdio.h>

// C PROGRAMM TO GENEARTE MULTIPLICATION TABLE

int main()
{
    int n, i, l;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter the limit : \n");
    scanf("%d", &l);

    for (i = 1; i <= l; ++i)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }

    return 0;
}
