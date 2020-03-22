#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, n;
    double y;
    n = scanf("%d",&x);
    if(n!=1){
        return 1;
    }
    y = (exp(0.5*x)*sin(0.5*x/sqrt(1+x*x*x)))/sqrt(1+x*x);
    printf("%f",y);
    return 0;
}
