#include <stdio.h>
#include <string.h>
#define MAX 1000001

int main(void)
{
	char word[MAX];
	int alphaCnt[26] = { 0 }; //알파벳 개수 카운트
	scanf("%s", word);
	int len = strlen(word);

	for (int i = 0; i < len; i++) {
		if (word[i] >= 97)
			word[i] = word[i] - 32;
		alphaCnt[word[i] - 65]++;
	}

	int max = alphaCnt[0];
	int index = 0;
	for (int i = 1; i < 26; i++) {
		if (alphaCnt[i] > max) {
			max = alphaCnt[i];
			index = i;
		}
		else if (alphaCnt[i] == max)
			index = -1;
	}

	if (index != -1)
		printf("%c", index + 65);
	else
		printf("?\n");
	
	return 0;
}