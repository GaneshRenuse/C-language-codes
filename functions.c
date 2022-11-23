#include <stdio.h>
void printstar(int n)
{
        for ( int i = 0; i < n ; i++)
        {
            printf("%c", '*');
        }
        
}
int takenumber()
{
    int i;
    printf("enetr a number\n");
    scanf("%d", &i);
    return i;
}
int main()
{
    int c;
c = takenumber();

printf("entered number is %d\n", c);

 return 0;
}
