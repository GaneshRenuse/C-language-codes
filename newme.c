#include <stdio.h>                    
#include <stdlib.h>                   
#include <math.h>                     
#include <string.h>                   

int main()
{
    int a = 32, sum;

    {
        int b = 24;                         // he
    }                                       // he
                                            // he
    {
        sum = a;
    }

    printf("values are : %d\n", a);
    printf("values are : %d\n", sum);
    printf("hence proved : \n");
    
    return 0;
}