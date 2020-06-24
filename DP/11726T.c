#include <stdio.h>
int memo[1001];
int topDown(int n)
{
	if (n==0 || n==1) return 1;
	if (memo[n]>0)
		return memo[n];
	memo[n] = topDown(n-1) + topDown(n-2);
	memo[n] %= 10007;
	return memo[n];
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", topDown(n));
} 