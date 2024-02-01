#include <iostream>

using namespace std;

bool arr[10001] = {false, };

int main(){
    int sum, a;
    for(int i=1; i<10001; i++){
        sum = i;
        a = i;
        
        while(a != 0){
            sum += a%10;
            a /= 10;
            
        }
        if(sum < 10001){
            arr[sum] = true;
        }
        
    }
    
    //출력
    for(int i=1; i<10001; i++){
        if(!arr[i]){
            cout << i<< "\n";
        }
    }
    return 0;
}