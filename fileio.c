#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, rum, cum;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("C:\\program1\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter marks : ");
   scanf("%d",&num);
   scanf("%d",&rum);
   scanf("%d",&cum);


   fprintf(fptr,"%d marks of ganesh\n", num);
   fprintf(fptr,"%d marks of kiran\n", rum);
   fprintf(fptr,"%d marks of vipraj\n", cum);
   fclose(fptr);

   return 0;
}