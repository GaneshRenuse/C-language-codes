#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;      //declaration of variables
    int add;

    printf("enter num1\n");   //input integer 1
    scanf("%d", &num1);

    printf("enter num2\n");    //input integer 2
    scanf("%d", &num2);

    add = num1 + num2;       //addition of two integer

    printf("%d + %d = %d\n", num1, num2, add);  // print the sum of two integer
    return 0;
}
