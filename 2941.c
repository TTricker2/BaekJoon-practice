#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[101];
	int cnt = 0;
	scanf("%s", word);

	for (int i = 0; ; i++) {

		if (word[i] == NULL) //문자열의 끝에 가면 반복문 중단
			break;
		if (word[i] == 'c' || word[i] == 's' || word[i] == 'z') {
			if (word[i + 1] == '=' || word[i + 1] == '-')
				continue;
		}
		else if (word[i] == 'n' || word[i] == 'l') {
			if (word[i + 1] == 'j')
				continue;
		}
		else if (word[i] == 'd') {
			if (word[i + 1] == 'z' && word[i + 2] == '=')
				continue;
			if (word[i + 1] == '-')
				continue;
		}
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}