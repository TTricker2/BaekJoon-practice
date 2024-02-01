#include <iostream>

using namespace std;

int main(){
    string n;
    
    while(true){
        cin >> n;
        if(n=="0") return 0;
        int sum = 0;
        for(int i=0; i<n.length(); i++){
            if(n[i]=='1') sum += 2;
            else if(n[i]=='0') sum+=4;
            else sum+=3;
        }
        cout << sum+2+n.length()-1 << "\n";
    }
    return 0;
}