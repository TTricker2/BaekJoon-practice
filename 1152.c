#include <stdio.h>
#define MAX 1000001

int main(void)
{
	char sentence[MAX];
	int num_word = 0, len = 0;
	char *p=gets_s(sentence, MAX); //���� ����ÿ� gets(sentence)�� �ٲٱ�

	for (int i = 0; sentence[i] != '\0'; i++) { //���鼼��
		if (sentence[i] == 32)
			num_word++;
		len++;
	}
	//�� �տ� �����ΰ�� �Ǵ� �Է¾����� ���
	if (sentence[0] == 32 || sentence[0] == '\0')
		num_word--;
	//�� �ڿ� ������ ���
	if (sentence[len - 1] == 32)
		num_word--;

	printf("%d\n", num_word+1);
	return 0;
}