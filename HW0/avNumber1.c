#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
  int a[N]; /* ������ a ������� N */
  int i,s;    /* ������� */
  double av;
  srand(time(NULL)); /* ��������� �������� ���������� ��� */

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    s += a[i];
    printf("%d\n", a[i]);
  }
  av = (double)s/N;
  printf("%f\n", av);
  return 0;
}
