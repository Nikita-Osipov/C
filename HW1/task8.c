#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20 /* ���������� ��������� ������� */


int main()
{
  int a[N]; /* ������ a ������� N */
  int b[N]; /* ������ a ������� N */
  int i,k,j,p = 0,sumn = 0;
  srand(time(NULL)); /* ��������� �������� ���������� ��� */
  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    b[i] = rand()%100;
    }
  for(i = N-1; i > 0; i--){
    for(j = 0; j < i; j++){
        if(a[j] > a[j+1]){
           k = a[j+1];
           a[j+1] = a[j];
           a[j] = k;
           }
        if(b[j] > b[j+1]){
           k = b[j+1];
           b[j+1] = b[j];
           b[j] = k;
           }
        }
  }
  while(p < N-1){
    if(a[p]==a[p+1]){
        p++;
        }
    else{
        for(i = 0; i < N; i++){
            if(a[p]==b[i]){
                sumn++;
                i = N;
            }
        }
        p++;
    }
  }
  for(i = 0; i < N; i++){
    if(a[p] == b[i]){
        sumn++;
        i = N;
    }
  }
  for(i = 0; i < N; i++){
    printf("%d ", a[i]);
  }
  printf("\n");
  for(i = 0; i < N; i++){
    printf("%d ", b[i]);
  }
  printf("\n%d", sumn);
  return 0;
}
