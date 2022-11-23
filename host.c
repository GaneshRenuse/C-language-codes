#include <stdio.h>                    
#include <stdlib.h>                   
#include <math.h>                     
#include <string.h>                   

int main()
{
    int a;
    
    printf("Enter the number : ");
    scanf("%d", &a);

    if (a % 2 != 0)
    {
        printf("weird\n");
    }
    else
    {
        if (a >= 2 && a <= 5)
        {
            printf("not weird\n");
        }
        else if(a >= 6 && a <= 20)
        {
            printf("weird\n");
        }
        else if (a > 20)
        {
            printf("not weird\n");
        }
    }
    return 0;
}