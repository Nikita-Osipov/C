#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i, s = 0, minn, maxn, maxi = 0, mini = 0,k;
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  minn = a[0] = rand()%100;
  printf("%d\n", a[0]);
  maxn = minn;
  for(i = 1; i < N; i++){
    a[i] = rand()%100;
    if(a[i] < minn){
        minn = a[i]; mini = i;
    }
    if(a[i] > maxn){
        maxn = a[i]; maxi=i;
    }
    printf("%d\n", a[i]);
  }
  if(mini > maxi){
    k = mini;
    mini = maxi;
    maxi = k;
  }
  for(i = mini+1; i < maxi; i++){
        s += a[i];
  }
  printf("\n%d",s);
  return 0;
}
