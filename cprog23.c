#include <stdio.h>
#include <string.h>
void main()
{
    char str[20], str1[20];
    int ch, l;
    char rev, upr, lwr;
    printf("Menu\n1.Length\n2.Copy\n3.Concatenation\n4.Compare\n5. Reverse\n6.Uppercase\n7. Lowercase\n");
    printf("enter option:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\nEnter the string:");
        scanf("%s", &str);
        l = strlen(str);
        printf("\nLength of string=%d", l);
        break;
    case 2:
        printf("\nEnter the string:");
        scanf("%s", &str);
        strcpy(str1, str);
        printf("\nAfter copy String str1=%s", str1);
        break;
    case 3:
        printf("\nEnter the First string:");
        scanf("%s", &str);
        printf("\nEnter the Second string:");
        scanf("%s", &str1);
        strcat(str, str1);
        printf("\nAfter Concat String str=%s", str);
        break;
    case 4:
        printf("\nEnter the First string:");
        scanf("%s", &str);
        printf("\nEnter the Second string:");
        scanf("%s", &str1);
        l = strcmp(str, str1);
        if (l == 0)
            printf("\nBoth are equal");
        else
            printf("\nBoth are Different");
        break;
    case 5:
        printf("\nEnter the string:");
        scanf("%s", &str);
        rev = strrev(str);
        printf("\nReverse of the string=%s", rev);
        break;
    case 6:
        printf("\nEnter the string:");
        scanf("%s", &str);
        upr = strupr(str);
        printf("\nUppercase of the string=%s", upr);
        break;
    case 7:
        printf("\nEnter the string:");
        scanf("%s", &str);
        lwr = strlwr(str);
        printf("\nLowercase of the string=%s", lwr);
        break;
    }
}
