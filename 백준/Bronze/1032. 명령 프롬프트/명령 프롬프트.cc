#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    string str;
    cin >> str;
    for(int i=0; i<n-1; i++){
        string tmp;
        cin >> tmp;
        for(int j=0; j<tmp.length(); j++){
            if(tmp[j] != str[j]){
                str[j] = '?';
            }
        }
    }
    
    cout << str;
    return 0;
}