#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double y, ymin = 0, x = -0.99;
    ymin = (exp(0.5*x)*sin(0.5*x/sqrt(1+x*x*x)))/sqrt(1+x*x);
    x += 0.01;
    while(x <= 2){
            y = (exp(0.5*x)*sin(0.5*x/sqrt(1+x*x*x)))/sqrt(1+x*x);
            if(ymin > y)
                ymin = y;
            x += 0.01;
    }
    printf("%f",ymin);
    return 0;
}
