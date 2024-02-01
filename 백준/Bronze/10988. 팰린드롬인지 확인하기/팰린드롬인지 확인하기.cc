#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    
    bool flag=true;
    for(int i=0; i<str.length()/2; i++){
        char a = str[i];
        char b = str[str.length()-1-i];
        if(a!=b){
            flag = false;
            cout << 0;
            break;
        }
    }
    
    if(flag) cout << 1;
    return 0;
}