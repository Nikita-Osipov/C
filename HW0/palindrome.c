#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fun(int count)
{
        int s = 1;
        while(count > 1){
            s *= 10;
            count -= 1;
        }
        return s;
}

int main()
{
    int x,y=0,t,s,count = 5;

    scanf("%d",&x);
    t = x;
    while (t != 0){
        s = t % 10;
        s = s*fun(count);
        y += s;
        t = t / 10;
        count -= 1;
    }
    if(x == y)
        printf("True");
    else
        printf("False");
    return 0;
}
