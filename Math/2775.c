#include <stdio.h>

int main(void)
{
	int test_num, floor, ho;
	int arr[15][15] = { 0 };
	for (int i = 0; i < 15; i++) 
		arr[0][i] = i;
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) 
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
	}
	scanf("%d", &test_num);
	for (int i = 0; i < test_num; i++) {
		scanf("%d %d", &floor, &ho);
		printf("%d\n", arr[floor][ho]);
	}
}