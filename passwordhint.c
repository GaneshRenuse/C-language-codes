#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <stdbool.h>

int main()
{
    int pass, suuc = 0;
    int count = 0, i;

    for(i = 1; i <= 5; i++)
    {
        system("cls");
        printf("\nhint : most terrfying, unexpected, dangerous, pandemic, unexplained\n");
        printf("Guess the 4 digit password (only 5 tries) : ");
        scanf("%d", &pass);

        count++;
        if (pass == 2020)
        {
            suuc = 1;
            break;
        }
    }

    if (suuc == 1)
    {
        printf("login succesful password is 2020\n");
        printf("tries taken : %d / 5\n", count);
    }
    else
    {
        printf("wrong password tries fininshed\n");
        printf("good luck next time\n");
    }
    
    return 0;
}