#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, ans = 1e9;
int a[51][51], time_check[51][51];
vector<pair<int, int>> virus, selected;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};


void printSelectedVirus() {
    cout << "Selected Virus: ";
    for (const auto& v : selected) {
        cout << "(" << v.first << ", " << v.second << ") ";
    }
    cout << endl;
}

//바이러스 좌표 초기 조합
void combination(int depth, int start){
    if(depth == m){
        fill(&time_check[0][0], &time_check[0][0]+51*51, 0);
        int res = 0;
        
        //원본 데이터 보존
        int temp[51][51];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                temp[i][j] = a[i][j]; 
            }
        }
        
        //바이러스 설치 
        queue<pair<int, int>> q;
        for(const auto& coord : selected){
            q.push(coord);
            temp[coord.first][coord.second] = -1; //바이러스 -1로 표기
        }
        
        //바이러스 퍼치기
        while(!q.empty()){
            int y = q.front().first;
            int x = q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int ny = y + dy[i];
                int nx = x + dx[i];
                if(nx<0 || ny<0 || nx>=n || ny>=n) continue;
                if(temp[ny][nx] == 0 || temp[ny][nx] == 2){
                    temp[ny][nx] = -1; //바이러스 전염
                    time_check[ny][nx] = time_check[y][x] + 1;
                    res = time_check[ny][nx];
                    q.push({ny, nx});
                }
            }
        }
        
        //모든 부분이 감염되었는지 확인
        bool flag = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(temp[i][j] == 0 || temp[i][j] == 2){
                    flag = false; // 감염 안되었으면 -1 출력해야 함.
                }
            }
        }

        
        if(flag){
            ans = min(ans, res);
        }
        return ;
    }
    
    for(int i=start; i<virus.size(); i++){
        selected.push_back(virus[i]);
        combination(depth+1, i+1);
        selected.pop_back();
    }
    
}


int main(){
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j] == 2) virus.push_back({i,j});
        }
    }
    
    combination(0, 0);
    if(ans == 1e9) cout << -1 << "\n";
    else cout << ans << "\n";
    
    return 0;
}