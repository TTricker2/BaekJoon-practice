#include <iostream>

using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        int sum = 0;
        if(n==0){
            break;
        }
        while(true){
            if(n%10 == 1) sum+=2;
            else if(n%10 == 0) sum+=4;
            else sum+=3;
            
            if(n<10) break;
            n /= 10;
            sum+=1;
        }
        cout << sum+2 << "\n";
    }
    return 0;
}