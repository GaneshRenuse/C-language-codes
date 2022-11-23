#include <stdio.h>
#include <string.h>

int main()  
{
    char str[100];
    printf("enter string 1 : ");
    scanf("%s", str);
    
    strrev(str);
    printf("reversed string 1 : %s\n", str);
    return 0;
}