#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int rollno;
    float marks;
} student;

int main()
{
    int a;

        student s1, s2;

        strcpy(s1.name, "ganesh renuse");

        s1.rollno = 6066;
        s1.marks = 455;

        printf("enter your 2 digit login id to get your details\n");
        scanf("%d", &a);

        if (a == 66)
        {
            printf("name : %s\n", s1.name);
            printf("rollno : %d\n", s1.rollno);
            printf("marks : %.2f/600\n", s1.marks);
        }       
        else
        {
            printf("you entered wrong id");
        
        }

        
       printf("enter student name :\n");
       scanf("%s", &s2.name);

       printf("enter student roll no :\n");
       scanf("%d", &s2.rollno);

       printf("enter student marks :\n");
       scanf("%.2f", &s2.marks);

       printf("thankyou");
    
        return 0;
} 