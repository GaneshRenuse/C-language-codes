#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient , "/" operator is used to find quotient.
    quotient = dividend / divisor;

    // Computes remainder , "%" operator is used to find modulous(remainder).
    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);

    return 0;
}