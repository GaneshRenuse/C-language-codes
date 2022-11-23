#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct avail_books
{
    // to store data of available books
    int book_id;
    char* book_name;
}ab[9];

struct issued_books
{
    // to store data of issued books
    int book_id;
    char* book_name;
}ib[9];

struct issue_std
{
    // to store data of students
    int roll_id;
    char* roll_name;
}istd[4];

void set_book_details(struct avail_books[]);  // to set(enter) book details
void set_std_details(struct issue_std[]);   // to set(enter) student details
void show_available_books(struct avail_books[]);   // to show avaialable books
void issue_book(struct avail_books[], struct issued_books[], struct issue_std[]);  // to issue a book
void return_book(struct avail_books[], struct issued_books[], struct issue_std[]);  // to return book

int main()
{
    set_std_details(istd);
    set_book_details(ab);
    int ch;

    while (1)
    {
        printf("\n\t- - - - - - L I B R A R Y - - - - - -\n");
        printf("\t     Show Available Books    [1]     \n");
        printf("\t     Issue Book              [2]     \n");
        printf("\t     Return Book             [3]     \n");
        printf("\t     Exit Library            [0]     \n");
        printf("\t- - - - - - - - - - - - - - - - - - -\n");
        printf("\tEnter Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1 :
            show_available_books(ab);
            break;
        case 2 :
            issue_book(ab, ib, istd);
            break;
        case 3 :
            break;
        case 0 :
            exit(1);
            break;
        default:
            printf("\n\t- - Wrong choice entered - - \n");
            break;
        }
    }
    return 0;
}

void set_book_details(struct avail_books ab[9])
{
    for (int i = 0; i <= 9; i++)
    {
        ab[i].book_id = i + 1;
    }
    ab[0].book_name = "c++";
    ab[1].book_name = "rdbms";
    ab[2].book_name = "java";
    ab[3].book_name = "programming";
    ab[4].book_name = "javascript";
    ab[5].book_name = "typescript";
    ab[6].book_name = "python";
    ab[7].book_name = "web-development";
    ab[8].book_name = "database";
    ab[9].book_name = "dsa";
}

void set_std_details(struct issue_std istd[4])
{
    for (int i = 0; i <= 4; i++)
    {
        istd[i].roll_id = i + 6601;
    }
    istd[0].roll_name = "ganesh";
    istd[1].roll_name = "aakanksha";
    istd[2].roll_name = "kiran";
    istd[3].roll_name = "atharva";
    istd[4].roll_name = "vipraj";
}

void show_available_books(struct avail_books ab[9])
{
    printf("\n\t- - - - - List of Books - - - - -\n");
    for (int i = 0; i <= 9; i++)
    {
        printf("\tBook ID : %d\tBookName : %s\n", ab[i].book_id, ab[i].book_name);   
    } 
    printf("\t- - - - - - - - - - - - - - - - -\n");
}

void issue_book(struct avail_books ab[9], struct issued_books ib[9], struct issue_std istd[4])
{
    int n, bid, ij;
    int checkid = 0, checkbid = 0;

    printf("\n");
    printf("\tEnter your Access id : ");
    scanf("%d", &n);

    for (int i = 0; i <= 4; i++)
    {
        if (n == istd[i].roll_id)
        {
            checkid = 1;
            ij = i;
        }
    }

    printf("\n\tEnter Book_ID : ");
    scanf("%d", &bid);

    for (int j = 0; j <= 9; j++)
    {
        if (bid == ab[j].book_id)
        {
            checkbid = 1;
        }
    }
    
    if (checkid == 1 && checkbid == 1)
    {
        
        printf("\n\t%s has been issued\n", ab[bid].book_name);
        printf("\tissued by %d %s\n", istd[ij].roll_id, istd[ij].roll_name);
        ib[bid].book_id = ab[bid].book_id;
        strcpy(ib[bid].book_name, ab[bid].book_name);
        ab[bid].book_id = 0;
        ab[bid].book_name = "NULL";
        /*
        */
    }
    else
    {
        printf("\n\tSomething went wrong( acces id or book id not found )\n");
    }
}

void return_book(struct avail_books ab[9], struct issued_books ib[9], struct issue_std istd[4])
{
    
}
