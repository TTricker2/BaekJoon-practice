#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct country{
    int id;
    int gold;
    int silver;
    int bronze;
    int rank;
};
int n, k, result = 0;

bool cmp(country a, country b){
    if(a.gold == b.gold){
        if(a.silver == b.silver)
            return a.bronze > b.bronze;
        else return a.silver > b.silver;
    }
    else return a.gold > b.gold;
}


int main(){
    cin >> n >> k;
    vector<country> v(n+1);
    for(int i=1; i<=n; i++){
        cin >> v[i].id >> v[i].gold >> v[i].silver >> v[i].bronze;
    }
    sort(v.begin()+1, v.end(), cmp);
    
    int currentRank = 1;
    for(int i=1; i<=n; i++){
        if(v[i].gold == v[i-1].gold && 
        v[i].silver == v[i-1].silver && v[i].bronze == v[i-1].bronze){
            v[i].rank = currentRank;
        }
        else{ //메달 수 다른 경우
            v[i].rank = i;
            currentRank = i;
        }
        if(v[i].id == k){
            result = v[i].rank;
            break;
        }
    }
    cout << result;
    
    return 0;
}