#include <stdio.h>                    
#include <stdlib.h>                   
#include <math.h>                     
#include <string.h>  

    /*
        BASIC MATHS CALCULATOR : 
        THIS CALCULATOR SUPPORTS ALL THE BASIC FUNCTIONS SUCH ADDITION , MULTIPLICATION , SUBSTRACTION , DIVISION.
        IT ASLO HAS TWO EXTRA BASIC FUNCTIONS 1) SQUARE 2) SQUARE ROOT.
        ALTHOUGH ITS NOT AS GOOD AS CALCULATOR AND NOT COMFORTABLE IN DAY TO DAY LIFE ITS JUST BASIC VERSION .
    */

   double findSQRT(double N) { return sqrt(N); }

int main()
{
    start :
{
    printf("\n\n\t************************\n");
    printf("\t*BASIC MATHS CALCULATOR*\n");
    printf("\t************************\n");

    printf("\n\t[]---M E N U---[]\n\n");
}
    int a;

    printf("\t1) Addition        [1]\n");
    printf("\t2) Multiplication  [2]\n");
    printf("\t3) Division        [3]\n");
    printf("\t4) Substraction    [4]\n");
    printf("\t5) Square          [5]\n");
    printf("\t6) Square root     [6]\n");
    printf("\t7) Exit            [0]\n");
    printf("\n\t---> "); scanf("%d", &a);

    switch (a)
    {
    case 1 :
        goto add;
        break;
    case 2 :
        goto mul;
        break;
    case 3 :
        goto div;
        break;
    case 4 :
        goto sub;
        break;
    case 5 :
        goto sqr;
        break;
    case 6 :
        goto root;
        break;
    case 0 :
        goto end;
        break;
    default:
        goto start;
        break;
    }

    add :
        {
            float a, b;
            printf("\tenter 1st number :\n");
            scanf("%f", &a);
            printf("\tenter 2nd number :\n");
            scanf("%f", &b);

            float sum = a+b;
            printf("addition of given numbers is : %f\n\n\n", sum);
            goto revert;

        }
    mul :
        {
            float c, d;
            printf("\tenter 1st number :\n");
            scanf("%f", &c);
            printf("\tenter 2nd number :\n");
            scanf("%f", &d);

            float mulp = c*d;
            printf("multiplication of given numbers is : %f\n\n\n", mulp);
            goto revert;
        }
    div :
        {
            float e, f;
            printf("\tenter 1st number :\n");
            scanf("%f", &e);
            printf("\tenter 2nd number :\n");
            scanf("%f", &f);

            float divi = e/f;
            printf("division of given numbers is : %f\n\n\n", divi);
            goto revert;
        }
    sub :
    {
            float g, h;
            printf("\tenter 1st number :\n");
            scanf("%f", &g);
            printf("\tenter 2nd number :\n");
            scanf("%f", &h);

            float subs = g-h;
            printf("substraction of given numbers is : %f\n\n\n", subs);
            goto revert;
    }
        sqr :
            {
            float s;
            printf("\tenter the number :\n");
            scanf("%f", &s);

            float sq = s*s;
            printf("square of given number is : %f\n\n\n", sq);
            goto revert;
            }
        root :
              {
                  int N;
                printf("enter a number : \n");
                scanf("%d", &N);
	            printf("the square root of given number is : %.1f\n\n\n ", findSQRT(N));
                goto revert;
              }
    
    revert :
        {   
            int m;
            printf("\t*********************************************\n");
            printf("\t** press [ 0 ] to exit and [ 1 ] to menu : **\n");
            printf("\t*********************************************\n\n");
            scanf("%d", &m);
            switch (m)
            {
                case 0 :
                    goto end;
                    break;
                case 1 : 
                    goto start;
                    break;
                
                default:
                    goto end;
                    break;
            }
        }
    end :
    return 0;
}