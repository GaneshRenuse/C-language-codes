#include <stdio.h>

int main()  
{
    int N = 5;
    int sum = 0;
    for (int i = 0; i <= N; i++)
    {
        sum += i;
    }
    printf("sum = %d\n",sum);
    return 0;
}