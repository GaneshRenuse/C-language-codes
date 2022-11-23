#include <stdio.h>
#include <stdlib.h>

void writesen()
{
    char sentence[1000];

        // creating file pointer to work with files
        FILE *fptr;

        // opening file in writing mode
        fptr = fopen("C:\\program1\\program.txt", "w");

        // exiting program
        if (fptr == NULL)
        {
            printf("\tError!");
            exit(1);
        }

        printf("\n\tEnter a sentence:\n");
        scanf("%[^\n]", &sentence);

        fprintf(fptr, "%s", sentence);
        fclose(fptr);
}

void readsen()
{
    char c[1000];

        FILE *fptr;

        if ((fptr = fopen("C:\\program1\\program.txt", "r")) == NULL)
        {
            printf("\tError! File cannot be opened.");
            // Program exits if the file pointer returns NULL.
            exit(1);
        }

        // reads text until newline is encountered
        fscanf(fptr, "%[^\n]", c);
        printf("\tData from the file:\n\t%s", c);

        fclose(fptr);
}

int main()
{
    int a, b;

    start : 
    printf("\t--------------------\n");
    printf("\t  (1) WRITE A NOTE  \n");
    printf("\t  (2) READ A NOTE   \n");
    printf("\t--------------------\n");
    printf("\t==> "); scanf("%d", &a);

    if (a == 1)
    {
        writesen();  
    }
    else if (a == 2)
    {
        readsen();
    }

    printf("\n\t----------------------------------\n");
    printf("\tPress (1) to menu and (2) to exit.\n");
    printf("\t----------------------------------\n");
    printf("\t==> "); scanf("%d", &b);

    if (b == 1)
    {
        goto start;
    }
    else if (b == 2)
    {
        goto exit;
    }

    exit : 
    return 0;
}