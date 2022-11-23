/*
#include <stdio.h>
#include <string.h>

int main()

{
char user[10];
char pass[10] = "sppug";
char passg[10];
int value;

printf("Enter your username:\n ");
scanf("%s", &user);

printf("Enter your password : \n");
scanf("%s", &passg);

value=strcmp(pass,passg);

if(value == 0)
    printf("logged in succesfully, thankyou.\n ");
else
    printf("enetred password was wrong");

return 0;
}
*/
#include <stdio.h>
#include <string.h>

int password_check(char pass[])
{
    char org_pass[] = "ganeshrr";
    int value;
    value = strcmp(pass, org_pass);
    return value;
}
int main()
{
    char passg[8];
    printf("\nEnter your password : ");
    scanf("%s", &passg);
    
    int value = password_check(passg);

    if(value == 0)
        printf("logged in succesfully, thankyou.\n");
    else
        printf("enetred password was wrong\n");

    return 0;
}
