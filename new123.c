#include <stdio.h>

int addnum(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 23, b = 45;
    printf("sum of two numbers : %d", addnum(a, b));
    return 0;
}