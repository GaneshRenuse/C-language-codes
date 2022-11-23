#include <stdio.h>
#include <math.h>


int main()
{
   printf("file name  is %s\n", __FILE__);

   printf("current date is %s\n", __DATE__);
   
   printf("current time is %s\n", __TIME__);
   
   printf("current line is %d\n", __LINE__);
   
   printf("ANSI : %d\n", __STDC__);

   return 0;
}
