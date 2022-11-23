// programm on null pointer

#include <stdio.h>                                      
#include <math.h>                     
#include <string.h>                   

int main()
{
   int a = 34;
   void *ptr = NULL;

   ptr = &a;
   printf("the value of a is %d\n", *((int *)ptr));
    return 0;
}
