#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = num; j > i+1; j--)
			printf(" ");
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 0; i < num - 1; i++) {
		for (int j = 0; j < i + 1; j++)
			printf(" ");
		for (int j = num - 1; j > i; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}