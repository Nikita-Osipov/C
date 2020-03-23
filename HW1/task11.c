#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int len(char *s)
{
    int i = 0;
    while(s[i]!='\0')
        i++;
    return i;
}

char* f(char *s)
{
    int k,i;
    k = len(s);
    char *s2 = malloc(k*2);
    for(i = 0; i < k; i++){
        s2[i] = s[i];
    }
    for(i = k; i < k*2; i++){
        s2[i] = s[i-k];
    }
    return s2;
}
int main()
{
    char *s = "Hello!";
    printf("\n%s",s);
    printf("\n%s",f(s));
    return 0;
}
