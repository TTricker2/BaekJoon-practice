#include <stdio.h>

int main(void)
{
	int a, sum = 0;
	char num[100] = { 0 };
	scanf("%d", &a);
	scanf("%s", num);

	for (int i = 0; i < a; i++)
		sum += num[i]-48; //���ڿ�1�� �ƽ�Ű�ڵ�� 48�̴�.
	printf("%d", sum);

	return 0;

}