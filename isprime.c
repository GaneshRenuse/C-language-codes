#include <stdio.h>   

int isprime(int num)
{
    int i;
    for(i = 2; i <= num/2; i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }
        return 1;
}

int main()
{
    int num;
    int isprime(int num);
    printf("enter any number : \n");
    scanf("%d", &num);

    if(isprime(num))
    {
        printf("%d is prime number \n", num);
    }
    else
    {
        printf("%d is not a prime number \n", num);
    }
    return 0;
}