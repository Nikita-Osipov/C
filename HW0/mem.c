#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int fun(int *a, int *b)
{
  *a = *a+*b;
  *b = *a-*b;
  *a = *a-*b;

}

int main()
{
  int a = 5, b = 6,t;
  fun(&a,&b);
  printf("%d %d", a, b);
  return 0;
}
