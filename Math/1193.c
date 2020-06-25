#include <stdio.h>

int main(void)
{
	int x, i;
	int cnt = 0, a = 1, b = 1;
	scanf("%d", &x);
	for (i = 1; ; i++) {
		cnt += i;
		if (x <= cnt)
			break;
	}
	a = x - (cnt - i);
	b = (i + 1) - a;
	if (i % 2 == 0)
		printf("%d/%d", a, b);
	else
		printf("%d/%d", b, a);
	
}