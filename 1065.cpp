#include <stdio.h>

//���� 1065 �Ѽ��� ���� ���
int han(int n) {
	int hun, ten, one;
	int cnt = 0;
	if (n < 100)
		return n;
	else {
		for (int i = 100; i <= n; i++) {
			hun = i / 100;
			ten = (i % 100) / 10;
			one = i % 10;
			if ((hun - ten) == (ten - one))
				cnt++;
		}
		return (cnt + 99);
	}
}


int main(void)
{
	int n, ans;
	scanf("%d", &n);
	ans = han(n);
	printf("%d", ans);

	return 0;
}
