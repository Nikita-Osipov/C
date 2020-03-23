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

char* f(char *s, char *s1)
{
    int k,t,i;
    t = len(s);
    k = len(s)+len(s1);
    char *s2 = malloc(k);
    for(i = 0; i < k; i++){
        if(i < t){
            s2[i] = s[i];
        }
        else{
            s2[i] = s1[i - t];
        }
    }
    return s2;
}
int main()
{
    char *s = "Hello!";
    char *s1 = "Plus!";
    printf("\n%s",f(s,s1));
    return 0;
}
