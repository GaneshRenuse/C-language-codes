#include <stdio.h>

void func(int a, int *f1, int *f2, int *f3)
{
    if (a % 2 == 0)
    {
        *f1 = 1;
    }
    if (a % 2 != 0)
    {
        *f2 = 1;
    }
    if (a % 3 == 0 || a % 7 == 0)
    {
        *f3 = 1;
    }
    
}

int main()
{
    int num, flag1 = 0, flag2 = 0, flag3 = 0;
    int *ptr1, *ptr2, *ptr3;
    ptr1 = &flag1; 
    ptr2 = &flag2; 
    ptr3 = &flag3;

    printf("Enter the value : ");
    scanf("%d", &num);

    func(num, ptr1, ptr2, ptr3);

    if (flag1 == 1)
    {
        printf("%d is a even number\n", num);
    }
    if (flag2 == 1)
    {
        printf("%d is a odd number\n", num);
    }
    if (flag3 == 1)
    {
        printf("%d is divisible by 3 or 7\n", num);
    }
    
    return 0;
}
