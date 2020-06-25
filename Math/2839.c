#include <stdio.h>
int main(void)
{
	int n, cnt = 0;
	scanf("%d", &n);
	while (1) {
		if (n % 5 == 0) {
			cnt += n / 5;
			break;
		}
		n = n - 3;
		cnt++;
		if (n < 0) {
			cnt = -1;
			break;
		}
	}
	printf("%d", cnt);
} 