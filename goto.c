#include <stdio.h>

int main()
{
// label :
   // printf("hehehehehe\n");
   // printf("gggggggg\n");

   // goto label;

   int i, j, num;

   for (i = 0; i < 8; i++)
   {
       printf("%d", i);
       for ( j = 0; j < 8; i++)
       {
           printf("enter the number or 0 to exit\n");
           scanf("%d", &num);
           if(num==0) {
               goto end;
           }
       }
       
   }
   end :

    return 0;
}
