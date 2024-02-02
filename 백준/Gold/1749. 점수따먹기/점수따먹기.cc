#include <iostream>
#include <algorithm>
using namespace std;

int n, m, ans=-9e8;
int pSum[201][201];

int solve(int h, int w){ //부분행렬 크기 h*w
    int ret = -9e8;
    for(int i=1; i<=n-h+1; i++){
        for(int j=1; j<=m-w+1; j++){
            ret = max(ret, pSum[i+h-1][j+w-1]-pSum[i-1][j+w-1] - pSum[i+h-1][j-1] + pSum[i-1][j-1]);
        }
    }
    return ret;
}

int main(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> pSum[i][j];
            pSum[i][j] += pSum[i][j-1] + pSum[i-1][j] - pSum[i-1][j-1];
        }
    }
    
    //모든 크기의 부분행렬 크기 비교
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            ans = max(ans, solve(i, j));
        }
    }
    cout << ans;
    
    return 0;
}