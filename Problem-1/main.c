#include <stdio.h>

int main()
{
<<<<<<< HEAD
    char s[12], *p = gets(s);

    while (*p == ' ')
        p++;

    printf("%c %c", *p, *(p + 1));

    return 0;
}
=======
	int a;

	if ((scanf("%d", &a) == 1) && (a >= 10) && (a <= 99))
		printf("%d %d\n", a / 10, a % 10);

	return 0;
}
>>>>>>> parent of 77b680b... Внесення змін до першого завдання...
