#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10 /* ���������� ��������� ������� */

int main()
{
  int a[N]; /* ������ a ������� N */
  int i,answ,n;    /* ������� */
  double e,r;
  n = scanf("%lf",&r);
  if(n!=1)
    return 1;
  srand(time(NULL)); /* ��������� �������� ���������� ��� */
  a[0] = rand()%100;
  e = abs(a[0]-r);
  answ = a[0];
  for(i = 1; i < N; i++){
    a[i] = rand()%100;
    if(abs(a[i]-r)<e){
        e = abs(a[i]-r);
        answ = a[i];
    }
  }
  printf("%d",answ);
  return 0;
}
