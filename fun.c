#include <stdio.h>

struct student
{
   int rollno;
   char name[20];
   float fees;
}std[10];

void display(struct student[], int n);

int main()  
{
   int n, i;
   printf("enter the no of students : ");
   scanf("%d", &n);
   for(i = 0; i < n; i++)
   {
      printf("enter the details of student %d : \n", i + 1);
      printf("enter name, rollno and fees : ");
      scanf("%s %d %f", &std[i].name, &std[i].rollno, &std[i].fees);
   }
   display(std, n);
   return 0;
}

void display(struct student std[10], int n)
{
   int i;  
   printf("details of students are : ");
   for (i = 0; i < n; i++)
   {
      printf("\ndetails of student %d : \n", i + 1);
      printf("\nNAME : %s\tROLLNO : %d\tFEES : %f\n", std[i].name, std[i].rollno, std[i].fees);
   }   
}