#include <iostream>
using namespace std;

int n, m, k;
long long pSum[301][301]; //2차원 누적합

int main(){
    cin >> n >> m;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> pSum[i][j];
            pSum[i][j] += pSum[i-1][j]+pSum[i][j-1]-pSum[i-1][j-1]; //누적합
        }
    }
    
    cin >> k;
    int i, j, x, y;
    for(int a=0; a<k; a++){
        cin >> i >> j >> x >> y;
        cout << pSum[x][y]-pSum[i-1][y]-pSum[x][j-1]+pSum[i-1][j-1]<<"\n"; 
    } 

    return 0;
}