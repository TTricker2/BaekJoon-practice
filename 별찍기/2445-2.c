#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num * 2; j++) {
			if (j <= i || j >= num * 2 - 1 - i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = num-1; i > 0; i--) {
		for (int j = 0; j < num * 2; j++) {
			if (j < i || j > num * 2 - 1 - i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}


	return 0;
}