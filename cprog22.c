#include<stdio.h>

int main()
{

	int i,n,size,sum;
	float avg = 0;

	printf("Please Enter the Array size = ");
	scanf("%d", &size);

	int arr[size];

    int *ptr;
    ptr = &arr[0];

    printf("Enter the elements of array\n");
    for(i = 0; i < size; i++)
    {
       scanf("%d",ptr + i);
	   sum = sum + *(ptr + i);
	}

	avg = (float)sum / size;

	printf("\nThe Sum of Array Items     = %d\n", sum);
	printf("\nThe Average of Array Items = %.2f\n", avg);
  
	return 0;
}