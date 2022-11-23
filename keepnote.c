// A SIMPLE NOTE DIARY PROGRAM TO STROE YOUR NOTES AND ALSO READ IT

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <conio.h>

// all the functions and there working are here.

void nwrite()   // function to write the note.
{

}

void nread()    // function to read the note.
{

}

void ndelete()  // function to delete the note.
{
    
}

int main()
{
    int a = 0;

    start : 
    {
        //BASIC NON GRAPHICAL USER INTERFACE TO INPUT THEIR CHOICE

        printf("\n\n\t---------------------------\n");
        printf("\t   KEEP  NOTES  PROGRAMM  \n");
        printf("\t---------------------------\n\n");
        printf("\t1) Write a note     | [ 1 ]\n");
        printf("\t2) Read the note    | [ 2 ]\n");
        printf("\t3) Edit the record  | [ 3 ]\n");
        printf("\t4) Delete the note  | [ 4 ]\n\n");
        printf("\t---------------------------\n");
    }
        printf("\t--> "); scanf("%d", &a);

        switch (a)
        {
        case 1 :
            goto write;
            break;
        case 2 : 
            goto read;
            break;
        case 3 :
            goto delete;
            break;
        default:
            goto exit;
            break;
        }
    
    write : 
        {

        }
    read :
        {

        }
    delete :
        {

        }

    exit :
    return 0;
}