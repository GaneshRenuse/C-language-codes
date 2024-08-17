// * Ganpati bappa morya

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct citizens
{
    char name[10];
    int aid;
    float fine;
} cit[5];

int AddCitizens(struct citizens cit[5])
{
    int n;
    printf("\nEnter the no of Citizens : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Name, aid and fine for Citizens %d : ", i + 1);
        scanf("%s %d %f", &cit[i].name, &cit[i].aid, &cit[i].fine);
        printf("\n");
    }

    return n;
}

void display(struct citizens cit[5], int n)
{
    printf("\ndetails of the Citizens are : ");
    printf("\nName\tAid\tFines\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t\t%d\t\t%.2f\n", cit[i].name, cit[i].aid, cit[i].fine);
    }
}

void IssueFine(struct citizens cit[5], int n)
{
    int id;
    float amount;
    printf("\nEnter aid of the Citizen to issue fine : ");
    scanf("%d", &id);
    printf("Enter the fine amount : ");
    scanf("%f", &amount);

    for (int i = 0; i < n; i++)
    {
        if (id == cit[i].aid)
        {
            cit[i].fine = amount;
        }
    }
}

int main()
{
    int n, choice = 0;

    while (1)
    {
        printf("\n--- Welcome to Issuefine Module ---\n");
        printf("1) Add Citizens\n");
        printf("2) Display Citizen Details\n");
        printf("3) Issue fines to Citizens\n");
        printf("4) Exit the program\n");
        printf("Enter your choice(1-4) : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            n = AddCitizens(cit);
            break;

        case 2:
            display(cit, n);
            break;

        case 3:
            IssueFine(cit, n);
            break;

        case 4:
            printf("\nExiting.....");
            exit(1);
            break;

        default:
            printf("\nError 404!!! \n Exiting the program......");
            exit(1);
            break;
        }
    }
    return 0;
}
