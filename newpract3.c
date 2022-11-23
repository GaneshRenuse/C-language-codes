#include <stdio.h>

void geteven(int n, int flag)
{
  if (n % 2 == 0)
  {
    printf("%d is even number\n", n);
    flag = 1;
  }
  printf("flag1 = %d\n", flag);
}

void getprime(int n, int flag)
{
  for (int i = 2; i <= n / 2; ++i) 
  {
    if (n % i == 0) 
    {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
  {
    printf("%d is prime number\n", n);
    flag = 1;
    printf("flag2 = %d\n", flag);
  }
}

void divisiblity(int n, int flag)
{
  if (n % 3 == 0 || n % 7 == 0)
  {
    printf("%d is divisible by 3 or 7\n", n);
    flag = 1;
  }
  printf("flag3 = %d\n", flag);
}

int main()
{
  int n, flag1 = 0, flag2 = 0, flag3 = 0;
  printf("enter a number : ");
  scanf("%d", &n);
  geteven(n, flag1);
  getprime(n, flag2);
  divisiblity(n, flag3);
  return 0;
}