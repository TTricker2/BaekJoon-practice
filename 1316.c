#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//alpha[26]과 같은 배열을 사용해서 알파벳의 사용유무를 저장하기
//이번같은 경우는 알파벳의 반복횟수보다는 한 번이라도 나왔는지 판단하는 것이 중요!
//따라서 bool타입을 쓰면 편하다.
int check_group(char arr[], int len)
{
	int flag = 0;
	for (int i = 0; i < len; i++) {
		for (int j = 1; j < len; j++) {
			if (arr[i] == arr[j]) {
				flag = j - i;
				if (flag > 1) //다시쓰인 알파벳이 붙어있지 않은 경우
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