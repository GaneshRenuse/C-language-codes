#include <stdio.h>

int main()
{
    int marks[0] = {82};
    int a;
        printf("enter your code number\n");
        scanf("%d", &a);
        
        if (a == marks[0])
            printf("very good");
        else 
            printf("very bad"); 
        
        
    return 0;
}
