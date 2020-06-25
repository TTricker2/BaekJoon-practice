#include <stdio.h>
int main(void)
{
	int a, b, v;
	int day;
	scanf("%d %d %d", &a, &b, &v);
	if ((v - a) % (a - b) != 0)
		day = (v - a) / (a - b) + 1;
	else
		day = (v - a) / (a - b);
	day++;
	printf("%d", day);
}