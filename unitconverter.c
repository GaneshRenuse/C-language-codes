#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <stdbool.h>
#define PI 3.14;

struct vars
{
    int choice;
    int unit1;
    float unit2;
    float output;
}v1;

void toradian()
{
    printf("Enter the angle in degree : ");
    scanf("%d", &v1.unit1);

    v1.output = v1.unit1 * 3.14/180;
    printf("Angle in radian is : %.3f rad\n\n", v1.output);
}

void todegree()
{
    printf("Enter the angle in radian : ");
    scanf("%f", &v1.unit2);

    v1.output = v1.unit2 * 180/3.14;
    printf("Angle in degrees is : %.1f degree\n\n", v1.output);
}

void tousd()
{
    printf("Enter the amount in INR : ");
    scanf("%f", v1.unit2);

    v1.output = v1.unit2 * 76.12;
    printf("Amount in USD : %.3f\n\n", v1.output);
}

int main()
{
    printf("\n\n1) Degree to radian [1] : \n");
    printf("2) Radian to degree [2] : \n");
    printf("3) INR to USD [3] : \n");
    printf("Enter your choice : ");
    scanf("%d", v1.choice);

    switch (v1.choice)
    {
        case 1 :
            toradian();
            break;
        case 2 : 
            todegree();
            break;
        case 3 :
            tousd();
            break;
    default:
        exit(1);
        break;
    }

    return 0;
}