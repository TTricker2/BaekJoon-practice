#include <stdio.h>

int main(void)
{
	int month, day;
	int month_days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const char* what_day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	scanf("%d %d", &month, &day);
	for (int i = 0; i < month; i++)
		day = day + month_days[i];
	printf("%s\n", what_day[day % 7]);
	return 0;

}