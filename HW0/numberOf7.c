#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,count = 0;
    scanf("%d", &x);

    while(x != 0){
        if(x % 10 == 7){
            count++;
        };
        x = x / 10;
    };
    printf("%d", count);
    return 0;
}
