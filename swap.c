#include <stdio.h>

int main()
{
    int a, b;
    printf("enter number 1 : \n");
    scanf("%d", &a);

    printf("enter number 2 :\n");
    scanf("%d", &b);


    int sum = a*a;
    int num = b*b;

    printf("squares of two numbers Before swap a^2 = %d b^2 = %d\n\n", sum, num);

    sum = sum + num; 
    num = sum - num; 
    sum = sum - num; 

    printf("squares of two numbers After swap a^2 = %d b^2 = %d\n\n", sum, num);

    return 0;
}