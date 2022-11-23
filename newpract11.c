#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float salary, tax;

    printf("enter the emp basic salary :");
    scanf("%f", &salary);

    if (salary <= 150000)
    {
        tax = 0;
        printf("tax = %f", tax);
    }
    else if (salary > 150000 && salary <= 300000)
    {
        tax = (salary * 0.2);
        printf("tax = %f", tax);
    }
    else if (salary > 300000)
    {
        tax = (salary * 0.3);
        printf("tax = %f", tax);
    }

    return 0;
}