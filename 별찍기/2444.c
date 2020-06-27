#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num-(i+1); j++)
			printf(" ");
		for (int j = 0; j < i * 2 + 1; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < i + 1; j++)
			printf(" ");
		for (int j = 0; j < (num - i - 1) * 2 - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}