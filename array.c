#include <stdio.h>

int main()
{
    int marks[2] = {20 ,25};
    int a;

    //printf("enter marks for roll no 6066\n");
    //anf("%d", &marks[0]);
    //tf("enter marks for roll no 6068\n");
    //scanf("%d", &marks[1]);

    printf("enter your roll no.\n");
    scanf("%d", &a);

    switch (a)
    {
    case 6066 :
        	printf("your marks are %d\n", marks[0]);
    break;

    case 6068 :
        	printf("your marks are %d\n", marks[1]);
        break;

    case 6067 :
            printf("sorry but you failed the exam\n");
            break;

    default:
   		printf(" roll no not found\n");
        break;
    }

    return 0;
}