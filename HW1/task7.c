#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5 /* ���������� ��������� ������� */

int main()
{
  int a[N]; /* ������ a ������� N */
  int i;
  srand(time(NULL)); /* ��������� �������� ���������� ��� */
  for(i = 0; i < N; i++){
    a[i] = rand()%100;
    printf("%d ",a[i]);
    }
  for(i = 0; i < N / 2; i++){
    if(a[i] != a[N-i-1]){
        printf("\nFalse");
        return 0;
    }
  }
  printf("\nTrue");
  return 0;
}
