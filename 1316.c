#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//alpha[26]�� ���� �迭�� ����ؼ� ���ĺ��� ��������� �����ϱ�
//�̹����� ���� ���ĺ��� �ݺ�Ƚ�����ٴ� �� ���̶� ���Դ��� �Ǵ��ϴ� ���� �߿�!
//���� boolŸ���� ���� ���ϴ�.
int check_group(char arr[], int len)
{
	int flag = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 1; j < len; j++) {
			if (arr[i] == arr[j]) {
				flag = j - i;
				if (flag > 1) //�ٽþ��� ���ĺ��� �پ����� ���� ���
					if (arr[j - 1] != arr[j])
						return 0;
			}
		}
	}
	return 1;
}

int main(void)
{
	int n;
	char arr[101];
	int ans=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", arr);
		ans += check_group(arr, strlen(arr));
	}
	printf("%d", ans);
	return 0;
}