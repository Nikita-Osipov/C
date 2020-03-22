#include <stdio.h>
#include <string.h>

int count_digits(const char *s)
{
    int i, count = 0;
    for(i = 0; i < strlen(s); i++){
        if('0' <= s[i] && s[i] <= '9'){
            count++;
        }
    }
    return count;
}
int main()
{
    char s[] = "He43dfd4456dfg666o!";
    count_digits(s);
    printf("%d",count_digits(s));
    return 0;
}
