#include <iostream>

using namespace std;

int arr[101]={0, };
int main(){
    int n, m;
    cin >> n >> m;
    for(int a=0; a<m; a++){
        int i, j, k;
        cin >> i >> j >> k;
        for(int b=i; b<=j; b++){
            arr[b] = k;
        }
    }
    
    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}