#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3 /* количество элементов массива */

int main()
{
  int a[N]; /* массив a размера N */
  int i;
  srand(time(NULL)); /* начальное значение генератора ПСЧ */
  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d ",a[i]);
    }
  for(i = 0; i < N-1; i++){
    if(a[i] % 2 == a[i + 1] % 2){
        printf("\nFalse");
        return 0;
    }
  }
  printf("\nTrue");
  return 0;
}
