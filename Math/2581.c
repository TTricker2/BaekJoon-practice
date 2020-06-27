#include <stdio.h>
#include <math.h>
int main(void)
{
	int start, end, sum = 0, min=10001;
	scanf("%d %d", &start, &end);
	for (int i = start; i <= end; i++) {
		if (i == 1) continue;
		else if (i == 2) {
			sum += i;
			min = i;
			continue;
		}
		int j;
		for (j = 2; j <= sqrt(i); j++)
			if (i % j == 0) break;

		if (j > sqrt(i)) {
			sum += i;
			min = i < min ? i : min;
		}
	}
	if (sum == 0) printf("-1\n");
	else printf("%d\n%d\n", sum, min);


}