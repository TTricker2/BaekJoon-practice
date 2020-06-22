#include <stdio.h>

int main(void)
{
	int a, sum = 0;
	char num[100] = { 0 };
	scanf("%d", &a);
	scanf("%s", num);

	for (int i = 0; i < a; i++)
		sum += num[i]-48; //문자열1은 아스키코드로 48이다.
	printf("%d", sum);

	return 0;

}