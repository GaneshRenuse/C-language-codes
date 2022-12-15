#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, order, deals;

    start : 
    {
        system("cls");
        printf("\n\t----------------------------\n");
        printf("\t   VISHWAKARMA HOTEL MENU   \n");
        printf("\t----------------------------\n");
        printf("\n\t(1) chicken biryani      $2 \n");
        printf("\t(2) chicken shwarma    $1.5 \n");
        printf("\t(3) chinese rice       $2.5 \n");
        printf("\t(4) chicken burger       $1 \n");
        printf("\t(5) Nawabi pizza       $4.5 \n");
        printf("\t(6) 250 ML coke       $1.75 \n");
        printf("\n\t----------------------------\n");
        printf("\n");
    }

    printf("\tPlease select the order number : ");
    scanf("%d", &order);
    printf("\tPlease enter the number of deals : ");
    scanf("%d", &deals);
    printf("\n");

    switch (order)
    {
    case 1 :
        system("cls");
        printf("\t-------------------------\n");
        printf("\tOrder : chicken biryani.\n");
        printf("\tNumber of deals : %d\n", deals);
        printf("\tPrice of each deal : $2.\n");
        printf("\tTotal price : $%d\n", 2 * deals);
        printf("\n");
        break;
    case 2 :
        system("cls");
        printf("\t-------------------------\n");
        printf("\tOrder : chicken shwarma.\n");
        printf("\tNumber of deals : %d\n", deals);
        printf("\tPrice of each deal : $3.\n");
        printf("\tTotal price : $%d\n", 3 * deals);
        printf("\n");
        break;
    case 3 :
        system("cls");
        printf("\t-------------------------\n");
        printf("\tOrder : chinese rice.\n");
        printf("\tNumber of deals : %d\n", deals);
        printf("\tPrice of each deal : $2.\n");
        printf("\tTotal price : $%d\n", 2 * deals);
        printf("\n");
        break;
    case 4 :
        system("cls");
        printf("\t-------------------------\n");
        printf("\tOrder : chicken burger.\n");
        printf("\tNumber of deals : %d\n", deals);
        printf("\tPrice of each deal : $1.\n");
        printf("\tTotal price : $%d\n", 1 * deals);
        printf("\n");
        break;
    case 5 : 
        system("cls");
        printf("\t-------------------------\n");
        printf("\tOrder : Nawabi pizza.\n");
        printf("\tNumber of deals : %d\n", deals);
        printf("\tPrice of each deal : $4.\n");
        printf("\tTotal price : $%d\n", 4 * deals);
        printf("\n");
        break;
    case 6 :
        system("cls");
        printf("\t-------------------------\n");
        printf("\tOrder : 250 ml coke.\n");
        printf("\tNumber of deals : %d\n", deals);
        printf("\tPrice of each deal : $3.\n");
        printf("\tTotal price : $%d\n", 3 * deals);
        printf("\n");
        break;
    default:
        system("cls");
        printf("\tYou entered wrong choice\n");
        printf("\n");
        goto start;
        break;
    }

    again : 
    {
        printf("\t-------------------------------------\n");
        printf("\tPress ( 0 ) to exit and ( 1 ) to menu\n");
        printf("\t-------------------------------------\n");
        printf("\t==> "); scanf("%d", &a);

        switch (a)
        {
        case 1 :
            goto start;
            break;
        default:
            goto exit;
            break;
        }

    }

    exit : 
    return 0;
}