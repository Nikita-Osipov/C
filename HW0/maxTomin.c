#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i,s, minn, maxn, maxi,mini;    /* счетчик */
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  minn = a[0] = rand()%100;
  s += a[0];
  printf("%d\n", a[0]);
  minn = s;
  maxn = s;
  maxi = 0;
  mini = 0;
  for(i = 1; i < N; i++){
    a[i] = rand()%100;
    s += a[i];
    if(a[i] < minn){
        minn = a[i];
        mini = i;
    }
    if(a[i] > maxn){
        maxn = a[i];
        maxi=i;
    }
    printf("%d\n", a[i]);
  }
  a[mini] = maxn;
  a[maxi] = minn;
  for(i = 0; i < N; i++){
    printf("%d\n", a[i]);
  }
  return 0;
}
