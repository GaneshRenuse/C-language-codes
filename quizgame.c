#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void lvlhigh()
{
    int marks = 0, ans;
    system("cls");
    printf("\n\tQ1) in c, if you pass an array as an arguement to a function,___actually gets passed\n\n");
    printf("\t1) value of elements in array    2) first element of array\n");
    printf("\t3) base address of the array   4) address of the last element of array\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 3)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ2) an array elements are always stored in____memory locations\n\n");
    printf("\t1) sequential    2) random\n");
    printf("\t3) sequential and random   4) none of the above\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 1)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ3) the maximum number of dimensions an array in c may have___\n\n");
    printf("\t1) two\n\t2) eight\n");
    printf("\t3) twenty\n\t4) theoretically no limit. the only practical limits are memory size and compilers\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 4)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ3) size of the array need not be specified, when____\n\n");
    printf("\t1) initialization    2) it is a declaration\n");
    printf("\t3) it is a formal parameter     4) all of these\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 1)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ3) maximum number of elements in the array declaration int a[5][8] is____\n\n");
    printf("\t1) 28     2) 32\n");
    printf("\t3) 35     4) 40\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 4)
    {
        marks++;
    }

    system("cls");
    printf("\n\tYou have completed the test.\n");
    printf("\tYour marks are : %d/5\n", marks);
}

void lvlmedium()
{
    int marks = 0, ans;
    system("cls");
    printf("\n\tQ1) a static variable by default gets initialized to____\n\n");
    printf("\t1) 0    2) blank space\n");
    printf("\t3) 1   4) garbage value\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 1)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ2) can we use a function as a parameter of another function?[eg : void wow(int func())]\n\n");
    printf("\t1) yes    2) yes, but not as convenient\n");
    printf("\t3) no, c does not support it   4) this case is compiler dependent\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 3)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ3) the value obtained in the function is given back to main by using___keyboard\n\n");
    printf("\t1) return   2) static\n");
    printf("\t3) new   4) volatile\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 1)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ4) ____is the return-type of the function sqrt()\n\n");
    printf("\t1) int   2) float\n");
    printf("\t3) double   4) depends on the data type of the parameter\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 3)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ5) global variables are____\n\n");
    printf("\t1) internal   2) external\n");
    printf("\t3) both internal and external   4) none of the mentioned\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 2)
    {
        marks++;
    }

    system("cls");
    printf("\n\tYou have completed the test.\n");
    printf("\tYour marks are : %d/5\n", marks);
}

void lvleasy()
{
    int marks = 0, ans;
    system("cls");
    printf("\n\tQ1) Who is father of c language\n\n");
    printf("\t1) james sosling    2) bjarne stroustrup\n");
    printf("\t3) dennis ritchie   4) dr e. f. codd\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 3)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ2) Many features of c were derived from an earlier language called?\n\n");
    printf("\t1) cobol    2) pascal\n");
    printf("\t3) fortran   4) B\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 4)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ3) Literal means\n\n");
    printf("\t1) string   2) a string constant\n");
    printf("\t3) a charachter   4) an alphabet\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 2)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ4) the valid range of numbers for int type of data is____\n\n");
    printf("\t1) 0 to 256   2) -32768 to +32767\n");
    printf("\t3) -65536 to +65536   4) no specific range\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 2)
    {
        marks++;
    }

    system("cls");
    printf("\n\tQ5) the maximum length of a variable in c is_____\n\n");
    printf("\t1) 8   2) 16\n");
    printf("\t3) 32   4) 64\n\n");
    printf("\tEnter your ans : "); scanf("%d", &ans);
    printf("\n");

    if (ans == 3)
    {
        marks++;
    }

    system("cls");
    printf("\n\tYou have completed the test.\n");
    printf("\tYour marks are : %d/5\n", marks);
}

int main()
{
    int choice;

    start : 
    {
        system("cls");
        printf("\n\n\t-----------------\n");
        printf("\t    QUIZ GAME    \n");
        printf("\t-----------------\n");
        printf("\t1) High level\n");
        printf("\t2) Medium level\n");
        printf("\t3) Low level\n");
        printf("\t4) Exit\n");
        printf("\t-----------------\n");
    }
        printf("\tEnter your choice : "); scanf("%d", &choice);
        printf("\n");

    switch (choice)
    {
        case 1 :
            lvlhigh();
            break;
        case 2 : 
            lvlmedium();
            break;
        case 3 :
            lvleasy();
            break;
        case 4 :
            exit(1);
            break;
        default:
            printf("\tYou entered wrong choice");
            goto start;
            break;
    }

    {
        int choice2;

        printf("\n\t-------------------------\n");
        printf("\tpress 0 to exit 1 to menu\n");
        printf("\t-------------------------\n");
        printf("\t==> "); scanf("%d", &choice2);

        switch (choice2)
        {
            case 0 :
                exit(1);
                break;
        
            default:
                goto start;
                break;
        }
    }

    return 0;
}