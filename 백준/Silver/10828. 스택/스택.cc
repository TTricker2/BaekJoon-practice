#include <iostream>

using namespace std;
int s=0;
int a[10001]; //스택
void push(int x){
    a[s]=x;
    s++;
}

int pop(){
    if(s==0) return -1;
    int x = a[s-1];
    s--;
    return x;
}

int size(){
    return s;
}

int empty(){
    if(s==0) return 1;
    return 0;
}

int top(){
    if(s==0) return -1;
    return a[s-1];
}


int main(){
    int n;
    string command;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> command;
        if(command == "push"){
            int num;
            cin >> num;
            push(num);
        }
        if(command == "pop"){
            cout << pop() << "\n";
        }
        if(command == "size"){
            cout << size() << "\n";
        }
        if(command == "empty"){
            cout << empty() << "\n";
        }
        if(command == "top"){
            cout << top() << "\n";
        }
        
    }
    
    return 0;
}