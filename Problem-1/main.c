#include <stdio.h>

int main()
{
	int a;

	if ((scanf("%d", &a) == 1) && (a >= 10) && (a <= 99))
		printf("%d %d\n", a / 10, a % 10);

	return 0;
}