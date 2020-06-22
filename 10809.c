#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[101];
	int ch[26];
	scanf("%s", word);
	for (int i = 0; i < 26; i++)
		ch[i] = -1;
	for (int i = 0; i < strlen(word); i++) {
		if (ch[word[i] - 97] == -1) 
			ch[word[i] - 97] = i;
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", ch[i]);

	return 0;
}