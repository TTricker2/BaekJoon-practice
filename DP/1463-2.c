#include <stdio.h>
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))
int min_cal(int num) 
{
	int a, b;
	if (num <= 1) return 0;
	a = min_cal(num / 2) + num%2 + 1;
	b = min_cal(num / 3) + num%3 + 1;
	return MIN(a, b);
}
int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d", min_cal(num));
	return 0;
}