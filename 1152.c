#include <stdio.h>
#define MAX 1000001

int main(void)
{
	char sentence[MAX];
	int num_word = 0, len = 0;
	char *p=gets_s(sentence, MAX); //백준 제출시엔 gets(sentence)로 바꾸기

	for (int i = 0; sentence[i] != '\0'; i++) { //공백세기
		if (sentence[i] == 32)
			num_word++;
		len++;
	}
	//맨 앞에 공백인경우 또는 입력안했을 경우
	if (sentence[0] == 32 || sentence[0] == '\0')
		num_word--;
	//맨 뒤에 띄어쓰기인 경우
	if (sentence[len - 1] == 32)
		num_word--;

	printf("%d\n", num_word+1);
	return 0;
}