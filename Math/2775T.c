#include <stdio.h>
int rsdnt_num(int floor, int ho) {
	if (ho == 1)
		return 1;
	if (floor == 0)
		return ho;
	return  rsdnt_num(floor - 1, ho) + rsdnt_num(floor, ho - 1);

}
int main(void)
{
	int test_num, floor, ho;
	scanf("%d", &test_num);
	for (int i = 0; i < test_num; i++) {
		scanf("%d %d", &floor, &ho);
		printf("%d\n", rsdnt_num(floor, ho));
	}
		
	
}