#include <stdio.h>
int move_num(int dist)
{
	long long cnt = 0;
	long long powi, min_rge, max_rge;
	for (long long i = 1; ; i++) {
		powi = i * i;
		min_rge = powi - i + 1; max_rge = powi + i;
		if (min_rge <= dist && dist <= max_rge) {
			if (min_rge <= dist && dist <= powi)
				cnt = i * 2 - 1;
			else
				cnt = i * 2;
			break;
		}
	}
	return cnt;
}

int main(void)
{
	int test_case;
	long long start, end;
	scanf("%d", &test_case);
	for (int i = 0; i < test_case; i++) {
		scanf("%d %d", &start, &end);
		printf("%d\n", move_num(end - start));
	}
}