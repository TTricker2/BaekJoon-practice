#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector<vector<int>> arr;
vector<bool> selected;
int minDiff = 987654321;

void calDifference(){
    int startAbi = 0;
    int linkAbi = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(selected[i] &&  selected[j]){
                startAbi += arr[i][j];
            }
            if(!selected[i] &&  !selected[j]){
                linkAbi += arr[i][j];
            }
        }
    }
    
    int diff = abs(startAbi - linkAbi);
    minDiff = min(minDiff, diff);
    
}

void makeTeam(int idx, int cnt){
    if(cnt == N/2){
        calDifference();
        return;
    }
    for(int i=idx; i<N; i++){
        if(!selected[i]){
            selected[i] = true;
            makeTeam(i+1, cnt+1);
            selected[i] = false;
        }
    }
}

int main(){
    cin >> N;
    arr.resize(N, vector<int>(N, 0));
    selected.resize(N, false);
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }
    makeTeam(0, 0);
    cout << minDiff << "\n";
    
    
}