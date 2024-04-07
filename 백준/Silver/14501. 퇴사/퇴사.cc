#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int>> schedule;
int main(){
    cin >> N;
    schedule.resize(N);
    for(int i=0; i<N; i++){
        cin >> schedule[i].first >> schedule[i].second;
    }
    
    //dp[i]에는 1~i번째 날까지의 최대수익을 저장
    vector<int> dp(N+1, 0);
    for (int i = 1; i <= N; i++) {
        int temp = i+schedule[i-1].first-1;
        if(temp <= N){ //i번째 일 상담을 선택할 수 있는 경우
            dp[i] = max(dp[i], dp[i-1]); 
            dp[temp] = max(dp[temp], dp[i-1]+schedule[i-1].second);
        }
        // i번째 날의 상담을 선택하지 않는 경우
        dp[i] = max(dp[i], dp[i - 1]);
    }
        
    cout << dp[N] << "\n";
}