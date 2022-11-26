#include <stdio.h>
#define MAX 100

void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int a[MAX];
    int n;
    
    printf("enter range : ");
    scanf("%d", &n);
    printf("enter values : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubble(a, n);

    for (int j = 0; j < n; j++)
    {
        if (j == a[j])
        {
            continue;
        }
        else
        {
            printf("\nnumber missing : %d\n", j);
        }
    }

    return 0;
}