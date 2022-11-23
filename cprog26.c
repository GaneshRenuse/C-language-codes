#include <stdio.h>                    
#include <stdlib.h>                   
#include <math.h>                     
#include <string.h>    
#include <stdbool.h>               

int main()
{
    float a = 2, b = 3.2346654, sum;
    double c = 2, d = 3.2346654, val;

    sum = a * b;
    val = c * d;

    printf("float precision : %.4f\n", sum);
    printf("double precision : %.4f\n", val);

    bool isnot = true;
    bool ifnot = false;

    printf("value of isnot : %d\n", isnot);
    printf("value of ifnot : %d\n", ifnot);


    return 0;
}