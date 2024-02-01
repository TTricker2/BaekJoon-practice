#include <iostream>

using namespace std;

int main(){
    int t, h, w, n;
    int res;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> h >> w >> n; //층, 각 층 방수, 손님순서
        
        if(n%h==0){
            res = h*100+(n/h);
        }else{
            res = (n%h)*100 + (n/h)+1;   
        }
        cout << res << "\n";
    }
    
    
    return 0;
}