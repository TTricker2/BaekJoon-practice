#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    int n;
    string command;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> command;
        if(command == "push"){
            int x; cin >> x;
            st.push(x);
        }
        if(command == "pop"){
            if(st.empty()) cout << -1 << "\n";
            else{
                cout<<st.top()<<"\n";
                st.pop();
            }
        }
        if(command == "size"){
            cout << st.size() << "\n";
        }
        if(command == "top"){
            if(st.empty()) cout << -1 << "\n";
            else cout << st.top() <<"\n";
        }
        if(command == "empty"){
            if(st.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        
    }
    
}