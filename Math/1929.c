#include <stdio.h>
int arr[1000001];
int main(void)
{
	int start, end;
	scanf("%d %d", &start, &end);
	arr[1] = 1;
	for (int i = 2; i <= end; i++) {
		for (int j = 2; i * j <= end; j++)
			arr[i * j] = 1;
	}
	for (int i = start; i <= end; i++) {
		if (!arr[i])
			printf("%d\n", i);
	}
}