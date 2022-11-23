#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;

    printf("enter the code given to you : \n");
    scanf("%d", &a);

    switch (a)
    {
    case 3433 :
        	printf("access granted \n");
    break;

    case 2467 :
        	printf("access granted \n");
        break;

    default:
   		printf(" access denied : entered code was wrong \n");
           goto end;
        break;
    }

	printf("enter your phone number : \n");
	scanf("%d", &b);

        if (b == 82) 
             printf("your id was found it is ganeshr");
        else if (b == 23)
            printf("your id was found it is nikitar");
        else
            printf("your id was not found");

            end :
	
       	return 0;
}
