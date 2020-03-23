#include <stdio.h>
#include <string.h>

int len(char *s)
{
    int i = 0;
    while(s[i]!='\0')
        i++;
    return i;
}

void f(char *s, char c)
{
    int k,i,tst = 0;
    k = len(s);
    for(i = 0; i < k; i++){
        if(s[i] == c){
            printf("%p",s[i]);
            tst = 1;
            break;
        }
    }
    if(tst == 0){
        printf("\nSymbol not found");
    }

}
int main()
{
    char *s = "Hello!";
    char c = 'H';
    f(s,c);
    return 0;
}
