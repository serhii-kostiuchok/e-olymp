#include <stdio.h>

int main()
{
    char s[12], *p = gets(s);

    while (*p == ' ')
        p++;

    printf("%c %c", *p, *(p + 1));

    return 0;
}
