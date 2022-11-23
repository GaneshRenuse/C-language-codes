#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

void display_offers()

{
    printf("\n\n\t-------------------\n\n");
    printf("\t 1) 20 percent off\n");
    printf("\t 2) 25 percent off\n");
    printf("\t 3) 11 percent off\n");
    printf("\t 4) 12 percent off\n");
    printf("\t 5) 45 percent off\n");
    printf("\t 6) 10 percent off\n\n");
    printf("\t-------------------\n\n");
}
void display_menu()
{
    printf("\n");
}
void display_buy()
{
    printf("\n");
}

int main()
{
        int a;
        start :
    {
        printf("\n\n\t---------------------------------\n");
        printf("\t D I N E S H  C H A  K I R A N A \n");
        printf("\t---------------------------------\n\n");
        printf("\t1) DISCOUNT OFFERES \n");
        printf("\t2) LIST OF ITEMS \n");
        printf("\t3) BUY ITEMS \n\n");
        printf("\t---------------------------------\n");
        printf("\t==> "); scanf("%d", &a);
    }

    if (a == 1)
    {
        goto off;
    }
    else if (a == 2)
    {
        goto list;
    }
    else if (a == 3)
    {
        goto buy;
    }
    else
    {
        goto exit;
    }
    
off : 
    {
        display_offers();
    }
list :
    {
        display_menu();
    }
buy :
    {
        display_buy();
    }

exit :
    return 0;
}