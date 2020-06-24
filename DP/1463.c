#include <stdio.h>
#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))
int dp[1000001];
int main(void)
{
	int num;
	scanf("%d", &num);
	dp[0] = 0; dp[1] = 0;
	for (int i = 2; i <= num; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i%2==0)
			dp[i] = MIN(dp[i], dp[i / 2] + 1);
		if(i%3==0)
			dp[i] = MIN(dp[i], dp[i / 3] + 1);
	}
	printf("%d", dp[num]);
}