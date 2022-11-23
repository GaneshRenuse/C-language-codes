#include <stdio.h>

struct tester
{
    int id;
}t[9];

void testid(struct tester[]);

int main()  
{
    testid(t);

    for (int i = 0; i <= 9; i++)
    {
        printf("%d\n", t[i].id);
    }
    return 0;
}

void testid(struct tester t[9])
{
    for (int i = 0; i <= 9; i++)
    {
        t[i].id = i + 101;
    }
}