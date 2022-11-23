#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[20] = "ganesh";
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
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    return 0;
}