#include <stdio.h>
#include <math.h>

int hypotenuse(int p, int b)
{
    return p * p + b * b;
}

double findSQRT(double N) { return sqrt(N); }

int main()
{
    int perp, base;

    printf("enter the value of first side :\n");
    scanf("%d", &perp);

    printf("enter the value of second side :\n");
    scanf("%d", &base);

    int hypsquare = hypotenuse(perp, base);

    int root;
    root = findSQRT(hypsquare);

    printf("Hypotenuse is %d", root);
    return 0;
}