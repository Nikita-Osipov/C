#include <stdio.h>
#include <string.h>

void f(char *s, char *s1)
{
    int k;
    k = strlen(s)+strlen(s1)+1;
    char *s2[k];
    strcpy(*s2,s);
    strcat(*s2,s1);
    printf("%s",*s2);
}
int main()
{
    char *s = "Hello!";
    char *s1 = "Plus!";
    f(s,s1);
    return 0;
}
