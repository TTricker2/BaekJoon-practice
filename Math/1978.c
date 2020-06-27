#include <stdio.h>

int main(void)
{
	int n, num, flag;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		flag = 0;
		if (num == 1) continue;
		for (int j = 2; j < num; j++) {
			if (num % j == 0)
				flag = 1;
		}
		if (flag == 0)
			cnt++;
	}
	printf("%d\n", cnt);	
}