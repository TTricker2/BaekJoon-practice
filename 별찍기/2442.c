#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = num-1; j > i; j--)
			printf(" ");
		for (int j = 0; j<i*2+1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}