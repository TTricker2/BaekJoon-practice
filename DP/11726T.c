#include <stdio.h>
int memo[1001];
int topDown(int n)
{
	if (n==0 || n==1) return 1;
	if (memo[n]>0)
		return memo[n]; //위의 if조건을 쓰지 않으면 시간초과가 나온다.
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
