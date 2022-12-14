#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// ALL THE WORKING OF LOGIC GATE FUNCTIONS IS HERE

int inot(int a)  // FUNCTION FOR NOT GATE
{
    return !a;
}

int iand(int a, int b)  // FUNCTION FOR AND GATE
{
    return a && b;
}

int ior(int a, int b)   // FUNCTION FOR OR GATE
{
    return a || b;
}

int inand(int a, int b) // FUNCTION FOR NAND GATE
{
    return !(a && b);
}

int inor(int a, int b)  // FUNCTION FOR NOR GATE
{
    return !(a || b);
}

int iexor(int a, int b) // FUNCTION FOR EX-OR GATE
{
    return !a && b || a && !b;
}

int iexnor(int a, int b)    // FUNCTION FOR EX-NOR GATE
{
    return !a && !b || a && b;
}

int main()
{
    int a;

    start:
{
    system("cls");
    // NON GRAPHICAL USER INTERFACE USING PRINTF FUNCTION
    printf("\n\n\t|[][][][][][][][][][][][][][][][][][][]|\n");
    printf("\t|                                      |\n");
    printf("\t| L O G I C  G A T E  O P E R A T O R  |\n");
    printf("\t|                                      |\n");
    printf("\t|[][][][][][][][][][][][][][][][][][][]|\n\n");

    printf("\t|$$  M E N U  $$|\n\n");

    printf("\t1) NOT GATE        [1]\n");
    printf("\t2) AND GATE        [2]\n");
    printf("\t3) OR GATE         [3]\n");
    printf("\t4) NAND GATE       [4]\n");
    printf("\t5) NOR GATE        [5]\n");
    printf("\t6) EX - OR GATE    [6]\n");
    printf("\t7) EX - NOR GATE   [7]\n");
    printf("\t8) EXIT            [0]\n");

}
    printf("\t-->  ");scanf("%d", &a);    // <----- TAKING CHOICE FROM USER 

    // USING SWITCH CASE AND GOTO STATEMENTS TO WORK ON A PARTICULAR LOGIC GATE

    switch (a)
    {
        case 1:
            goto gnot;
            break;
        case 2:
            goto gand;
            break;
        case 3:
            goto gor;
            break;
        case 4:
            goto gnand;
            break;
        case 5:
            goto gnor;
            break;
        case 6:
            goto gexor;
            break;
        case 7:
            goto gexnor;
            break; 
        case 0:
            goto end;
            break; 
        default:
            printf("\n\texit (1) : wrong input choice\n");
            break;
    }   

    gnot :
        {
            system("cls");
            int x;
            bool output;

            printf("\n\tEnter the input values : \n");
            printf("\t-->"); scanf("%d", &x);
            output = inot(x);
            
            printf("\n\tOutput for the given input values : %d\n", output);
            goto again;
        }
    gand :
        {
            system("cls");
            int x, y;
            bool output;

            printf("\n\tEnter two input values : \n");
            printf("\t-->"); scanf("%d %d", &x, &y);
            output = iand(x, y);

            printf("\tOutput for the given input values : %d\n", output);
            goto again;
        }
    gor :
        {
            system("cls");
            int x, y;
            bool output;

            printf("\n\tEnter two input values : \n");
            printf("\t-->"); scanf("%d %d", &x, &y);
            output = ior(x, y);

            printf("\tOutput for the given input values : %d\n", output);
            goto again;
        }
    gnand :
        {
            system("cls");
            int x, y;
            bool output;

            printf("\n\tEnter two input values : \n");
            printf("\t-->"); scanf("%d %d", &x, &y);
            output = inand(x, y);

            printf("\tOutput for the given input values : %d\n", output);
            goto again;
        }
    gnor :
        {
            system("cls");
            int x, y;
            bool output;

            printf("\n\tEnter two input values : \n");
            printf("\t-->"); scanf("%d %d", &x, &y);
            output = inor(x, y);

            printf("\tOutput for the given input values : %d\n", output);
            goto again;
        }
    gexor :
        {
            system("cls");
            int x, y;
            bool output;

            printf("\n\tEnter two input values : \n");
            printf("\t-->"); scanf("%d %d", &x, &y);
            output = iexor(x, y);

            printf("\tOutput for the given input values : %d\n", output);
            goto again;
        }
    gexnor :
        {
            system("cls");
            int x, y;
            bool output;

            printf("\n\tEnter two input values : \n");
            printf("\t-->"); scanf("%d %d", &x, &y);
            output = iexnor(x, y);

            printf("\tOutput for the given input values : %d\n", output);
            goto again;
        }
    again :
        {
            int cc;
            printf("\n\n\t*********************************************\n");
            printf("\t** press [ 0 ] to exit and [ 1 ] to menu : **\n");
            printf("\t*********************************************\n\n");
            printf("\t-->"); scanf("%d", &cc);

            switch (cc)
            {
            case 1 :
                goto start;
                break;
            case 2 :
                goto end;
                break;
            default:
                goto end;
                break;
            }
        }

    end :
    return 0;
}