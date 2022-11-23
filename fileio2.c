#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100], rum[100], sum[100];
   FILE *fptr;

   if ((fptr = fopen("C:\\program1\\program.txt","r")) == NULL){
       printf("Error ! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%[^\n]s", &str);
   fscanf(fptr,"\n");
   fscanf(fptr,"%[^\n]s", &rum);
   fscanf(fptr,"\n");
   fscanf(fptr,"%[^\n]s", &sum);

   printf("Values inside the file are = %s\n", str);
    
   printf("values inside the file are = %s\n", rum);

   printf("values inside the file are = %s\n", sum);
   fclose(fptr); 
  
   return 0;
}
