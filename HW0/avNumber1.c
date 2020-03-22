#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i,s;    /* счетчик */
  double av;
  srand(time(NULL)); /* начальное значение генератора ПСЧ */

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    s += a[i];
    printf("%d\n", a[i]);
  }
  av = (double)s/N;
  printf("%f\n", av);
  return 0;
}
