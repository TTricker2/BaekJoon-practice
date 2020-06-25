#include <stdio.h>

int main(void)
{
	int n, ans, cnt = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		cnt += (i - 1) * 6;
		if (n <= cnt) {
			ans = i;
			break;
		}
	}
	printf("%d", ans);
}