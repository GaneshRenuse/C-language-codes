#include <stdio.h>

struct employee
{
    int id;
    char name[20];
    float sal;
}emp[10];

void display(struct employee[], int n);

int main()  
{
    int n, i;
    printf("total number of employees : "); 
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nenter the details of employee %d : \n",  i + 1);
        printf("\nEnter the name, id and salary : ");
        scanf("%s %d %f", &emp[i].name, &emp[i].id, &emp[i].sal);
    }
    display(emp, n);
    return 0;
}

void display(struct employee emp[10], int n)
{
    int i;
    printf("\nemployee details : \n");
    for (i = 0; i < n; i++)
    {
        printf("\n ID : %d\t NAME : %s\t SALARY : %f\t", emp[i].id, emp[i].name, emp[i].sal);
    }
}