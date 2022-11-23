#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char z[90];
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]s", &s);
    scanf("\n");
    scanf("%[^\n]s", &z);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", z);


    return 0;
}