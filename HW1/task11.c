#include <stdio.h>
#include <string.h>

void f(char *s)
{
    int k;
    k = strlen(s);
    char *s2[k*2+1];
    strcpy(*s2,s);
    strcat(*s2,s);
    printf("%s",*s2);
}
int main()
{
    char *s = "Hello!";
    f(s);
    printf("\n%s",s);
    return 0;
}
