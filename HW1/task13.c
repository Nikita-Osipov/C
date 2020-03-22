#include <stdio.h>
#include <string.h>

void f(char *s, char c)
{
    int k,i;
    k = strlen(s);
    for(i = 0; i < k; i++){
        if(s[i] == c){
            printf("%p",s[i]);
            break;
        }
    }

}
int main()
{
    char *s = "Hello!";
    char c = 'H';
    f(s,c);
    return 0;
}
