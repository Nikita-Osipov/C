#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
  int a[N]; /* ������ a ������� N */
  int i;    /* ������� */
  srand(time(NULL)); /* ��������� �������� ���������� ��� */

  for(i = 0; i < N; i++){
    a[i] = rand()%100;
  }
  for(i = 0; i < N; i +=2){
    printf("%d\n",a[i]);
  }
  for(i = 1; i < N; i +=2){
    printf("%d\n",a[i]);
  }

  return 0;
}
