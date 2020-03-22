#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fun(float r)
{
        double pi = 3.14159, s, d, p;
        s = pi*r*r;
        d = 2*r;
        p = 2*pi*r;
        printf("S:%f\n",pi);
        printf("D:%f\n",d);
        printf("P:%f\n",p);
        return 0;
}

int main()
{
    float r;
    scanf("%f",&r);
    fun(r);
    return 0;
}
