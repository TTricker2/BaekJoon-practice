#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) { //print first line
		if (i < num-1)
			printf(" ");
		else
			printf("*");
	}
	if (num > 1) {
		printf("\n");
		for (int i = 1; i < num - 1; i++) {
			for (int j = i; j < num-1; j++)
				printf(" ");
			printf("*");
			for (int j = 0; j < i * 2 - 1; j++)
				printf(" ");
			printf("*\n");
		}
		for (int i = 0; i < num * 2 - 1; i++)//print last line
			printf("*");
	}
}
