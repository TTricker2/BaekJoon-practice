#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; cin >> N;

	int arr[10001] = { 0, };
	for (int i = 0; i < N; i++) {
		int num=0; cin >> num;
		arr[num] += 1;
	}

	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << "\n";
		}
	}
}

/*
3번이나 시간초과가 나온 문제임
원인을 알고보니 출력부분에서 endl을 쓴 것이 문제였음  -- > "\n"을 사용해야 함
endl은 버퍼를 비우고, \n은 버퍼를 안비운다. 그래서 속도가 \n이 빠르다. 
굳이 즉시 출력이 필요하지 않아ㄷ면 \n으로 모아두었다가 출력하는게 시간을 줄일 수 있다.
*/
