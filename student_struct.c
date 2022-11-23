#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct fybsc
{
    int rollno;
    char name[30];
    float marks;
}fy[10];

void display(struct fybsc[], int n);  // to display details of students
void search_roll(struct fybsc[], int n); // to search roll no and print details of given roll no
void marklist(struct fybsc[], int n);   // to display marklist of students
void backlog(struct fybsc[], int n); // to display details of failed students

int main()     
{
    int choice, n;
    while(1)
    {
        printf("\n\t- - - - - - C O L L E G E - - - - - -\n");
        printf("\t1) Enter details of students\n");
        printf("\t2) display details of students\n");
        printf("\t3) Search rollno\n");
        printf("\t4) Marklist\n");
        printf("\t5) List of backlog students\n");
        printf("\t6) Exit\n\n");
        printf("\t~~ Enter choice : ");
        scanf("%d", &choice);

        // using switch case for users choices
        switch (choice)
        {
            case 1 :
                // taking student data as input 
                printf("\n\tEnter the no of students : ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++)
                {
                    printf("\n\tEnter rollno, name and marks for student %d : ", i + 1);
                    scanf("%d %s %f", &fy[i].rollno, &fy[i].name, &fy[i].marks);
                    printf("\n");
                }
                break;
            case 2 :
                // calling the display function
                display(fy, n);
                break;
            case 3 :
                // calling the search_roll function
                search_roll(fy, n);
                break;
            case 4 :
                // calling marklist function
                marklist(fy, n);
                break;
            case 5 :
                // calling backlog function
                backlog(fy, n);
                break;
            case 6 :
                // if users input 0 then the program exits with returning 1
                exit(1);
                break;
            default:
                exit(1);
                break;
        }
    }
    return 0; 
} 

void display(struct fybsc fy[10], int n)
{
    printf("\n\tDetails of students are : ");
    printf("\n\tRollno\t\tName\t\tMarks");
    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d\t\t%s\t\t%.2f", fy[i].rollno, fy[i].name, fy[i].marks);
    }
    printf("\n");
}

void search_roll(struct fybsc fy[10], int n)
{
    /*
        here we use FOR loop and IF statement to search roll no
        the roll no entered by user is compared with student roll no
        and if it is same then it print the details of that particular student
        and if there is no such roll no int the system the it prints the message as
        " no record is found "
    */
    int roll, count = 0;
    printf("\n\tEnter the rollno to search : ");
    scanf("%d", &roll);
    printf("\n\tRollno\t\tName");
    for (int i = 0; i < n; i++)
    {
        if (fy[i].rollno == roll)
        {
            printf("\n\t%d\t\t%s", fy[i].rollno, fy[i].name);
            count++;
        }
    }
    if (count == 0)
    {
        printf("\n\tNo data found for rollno : %d", roll);
    }  
}

void marklist(struct fybsc fy[10], int n)
{
    // here we just use a simlple for loop for printing the 
    // details of student marks 
    printf("\n\tMarklist details");
    printf("\n\tRollno\t\tMarks");
    for (int i = 0; i < n; i++)
    {
        printf("\n\t%d\t\t%.2f", fy[i].rollno, fy[i].marks);
    }    
}

void backlog(struct fybsc fy[10], int n)
{
    /*
        here the passing criteria of marks is 35 
        while looping through student marks if any student 
        gets less then 35 then the condition inside the IF gets fulfilled 
        and it prints detials of the failed student
    */
    printf("\n\tBacklog details");
    for (int i = 0; i < n; i++)
    {
        if (fy[i].marks < 35)
        {
            printf("\n\t%d\t\t%s", fy[i].rollno, fy[i].name);
        }       
    } 
}