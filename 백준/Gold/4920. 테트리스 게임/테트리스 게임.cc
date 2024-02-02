#include <iostream>

using namespace std;

int arr[13][4][2] = {
    {{0,0},{0,1},{0,2},{0,3}}, //-
    {{0,0},{1,0},{2,0},{3,0}}, //I 
    {{0,0},{1,0},{0,1},{1,1}}, //ㅁ
    {{0,1},{1,0},{1,1},{1,2}}, //ㅗ
    {{0,0},{1,0},{2,0},{1,1}}, //ㅏ
    {{0,0},{0,1},{0,2},{1,1}}, //ㅜ
    {{0,1},{1,0},{1,1},{2,1}}, //ㅓ
    {{0,0},{0,1},{0,2},{1,2}}, //ㄱ
    {{0,0},{1,0},{1,1},{1,2}}, //ㄴ
    {{0,1},{1,1},{2,1},{2,0}}, //
    {{0,0},{0,1},{1,0},{2,0}}, //
    {{0,0},{0,1},{1,1},{1,2}}, //ㄹ
    {{0,1},{1,0},{1,1},{2,0}}, //
};

int n, ans;
int mat[101][101];

void solve(int x, int y){
    int sum;
    bool flag;
    for(int i=0; i<13; i++){
        sum=0;
        flag=1;
        for(int k=0; k<4; k++){
            int nx = x + arr[i][k][0];
            int ny = y + arr[i][k][1];
            if(nx<0 || ny<0 || nx>=n || ny>=n) {
                flag=0;
                break;
            }
            sum += mat[nx][ny];
        }
        if(flag){
            ans = max(ans, sum);
        }
            
    }
    
}

int main()
{   
    int tc = 1;
    while(1){
        cin >> n;
        if(n==0) break;
        ans=-987654321;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> mat[i][j];
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                solve(i, j);
            }
        }
        cout << tc++ << ". " << ans << "\n";
    }
    return 0;
}