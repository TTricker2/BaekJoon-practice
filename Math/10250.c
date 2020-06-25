#include <stdio.h>
int main(void)
{
	int test_num, h, w, n;
	scanf("%d", &test_num);
	for (int i = 0; i < test_num; i++) {
		int cnt = 1;
		scanf("%d %d %d", &h, &w, &n);
		if (n <= h) {
			printf("%d\n", n * 100 + 1);
		}
		else {
			while (1) {
				n = n - h;
				cnt++;
				if (n <= h)
					break;
			}
			printf("%d\n", n*100+cnt);
		}
	}
		
	
}