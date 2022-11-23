#include <stdio.h>
#include <stdlib.h>

int main()
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

    return 0;
}