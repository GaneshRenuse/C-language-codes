// C program for the above approach
#include <math.h>
#include <stdio.h>

// Function to find the square-root of N
double findSQRT(double N) { return sqrt(N); }

// Driver Code
int main()
{

	// Given number
	int N;

    printf("enter a number : \n");
    scanf("%d", &N);

	// Function call
	printf("%.1f ", findSQRT(N));
	return 0;
}
