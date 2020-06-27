//분할정복 - 나중에 공부할 내용
#include <stdio.h>

char map[2300][2300];
void draw(int num, int x, int y)
{
	if (num == 1) {
		map[x][y] = '*';
		return;
	}
	int div = num / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1);
			else draw(div, x + (j * div), y + (i * div));
		}
	}
}
int main(void)
{
	int num;
	scanf("%d", &num);
	memset(map, ' ', sizeof(map));; // 공백으로 배열 채우기
	draw(num, 0, 0);
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++)
			printf("%c", map[i][j]);
		printf("\n");
	}

	
}