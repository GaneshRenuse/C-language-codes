#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int arr[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int arr[100];
    FILE *fptr;
    fptr = fopen("c:\\program1\\program.txt", "r");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    /*
    for (int i = 0; i <= 15; i++)
    {
        fprintf(fptr, "%d\n", arr[i]);
    }*/
    for (int i = 0; i <= 15; i++)
    {
        fscanf(fptr, "%d", arr[i]);
    }
    
    for (int i = 0; i <= 15; i++)
    {
        printf("%d\n", arr[i]);
    }
    fclose(fptr);

    return 0;
}