#include <stdio.h>
#include <string.h>

int len(char *s)
{
    int i = 0;
    while(s[i]!='\0')
        i++;
    return i;
}
int st(int a, int b)
{
    int i;
    for(i = 1; i < b; i++){
        a *= 10;
    }
    return a;
}
int fatoi(char *s)
{
    int n = 0,i,k;
    k = len(s);
    for(i = 0; i < k; i++){
        n = n + st(s[i]-'0',k-i);
    }
    return n;
}
int main()
{
    char *s = "124533";
    printf("%d",fatoi(s));
    return 0;
}
