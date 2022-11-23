#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <unistd.h>

/*
    ! THIS IS THE ULTIMATE HEADER FILE WHICH INCLUDES ALL THE FUNCTIONS. 
    ! WHICH CAN BE USED IN MANY PROGRAM
    ? CREATED BY : CODE22.GANESH
*/

void oddeve(int a)
{
    if (a % 2 == 0)
    {
        printf("%d is Even.\n", a);
    }
    else
    {
        printf("%d is Odd.\n", a);
    }
    
}

void leapyear(int year)
{
    if (year % 400 == 0)
    {
        printf("%d is a leap year.", year);
    }
    
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year.", year);
    }
    
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    
    else
    {
        printf("%d is not a leap year.", year);
    }
}

void simplecalc(int a, int b, char c)
{
    char ca = c;
    int opp = 0;

    if (ca == "+")
    {
        opp = a + b;
        printf("\nAddition is : %d", opp);
    }
    else if (ca == "-")
    {
        opp = a - b;
        printf("\nSubstraction is : %d", opp);
    }
    else if (ca == "*")
    {
        opp = a * b;
        printf("\nMultiplication is : %d", opp);
    }
    else if (ca == "/")
    {
        opp = a / b;
        printf("\nDivision is : %d", opp);
    }
    else 
    {
        printf("you entered wrong operator.\n");
    }
}