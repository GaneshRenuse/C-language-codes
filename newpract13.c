#include <stdio.h>

int main()
{
    int n1, n2, temp;

    printf("\n Enter value for n1 : ");
    scanf("%d", &n1);
    
    printf("\n Enter value for n2 : ");
    scanf("%d", &n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("\n After swapping \n ");
    printf("n1=%d\tn2=%d", n1, n2);

    return 0;
}