#include <stdio.h>

void cal(int n);

int main()
{
    int n;

    printf("Enter the number");
    scanf("%d", &n);
    printf("Digits of %d are\n", n);

    cal(n);

    return 0;
}

void cal(int n)
{
    int i;

    if (n > 0)
    {
        i = n % 10;
        n = n / 10;

        cal(n);
        printf("%d\n", i);
    }
}