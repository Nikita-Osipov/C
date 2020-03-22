#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100 /* количество элементов массива */

int main()
{
  double a[N],k; /* массив a размера N */
  int i,j,h = 0,t = 0;
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  for(i = 0; i < N; i++){
    a[i] = (float)(rand()%1000)/1000;
    printf("%.3f ", a[i]);
    }
  for(i = N-1; i > 0; i--){
    for(j = 0; j < i; j++){
        if(a[j] > a[j+1]){
           k = a[j+1];
           a[j+1] = a[j];
           a[j] = k;
        }
    }
  }
  printf("\n");
  for(i = 0; i < N - 1; i++){
    if(a[i] == a[i+1]){
        h++;
    }
  }
  double b[N - h];
  for(i = 0; i < N - 1; i++){
    if(a[i]!=a[i+1]){
        b[t]=a[i];
        t++;
    }
  }
  if(a[N-2] != a[N-1]){
    b[N-h-1]=a[N-1];
  }
  for(i = 0; i < N - h; i++){
    printf("%.3f ",b[i]);
  }
  return 0;
}
