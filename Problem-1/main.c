#include <stdio.h>

int main()
{
    char s[12], *p = fgets(s, 12, stdin);
    printf("%c %c", *p, *(p + 1));

    return 0;
}