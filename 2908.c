#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ReversedString(char a[])
{
	char temp[3];
	for (int i = 0; i < 3; i++) //a�迭�� temp�迭�� ���� ����
		temp[i] = a[3 - (i + 1)];
	memcpy(a, temp, 3); //memcpy(a, temp, a����)
}

int main(void)
{
	char a[4], b[4];
	int num1, num2;
	scanf("%s", a);
	scanf("%s", b);
	ReversedString(a);
	ReversedString(b);
	
	num1 = atoi(a); num2 = atoi(b);
	if (num1 > num2)
		printf("%d", num1);
	else
		printf("%d", num2);
	return 0;
}