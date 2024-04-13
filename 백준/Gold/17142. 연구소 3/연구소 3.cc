#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
//연구소3
// m개 뽑기 - 바이러스 배치 - 바이러스 퍼치기 - 시간 계산
// 연구소2와 다른 점: 비활성 바이러스도, 감염된걸로 침.

using namespace std; 

int n, m, ans=1e9;
int a[51][51], time_check[51][51];
vector<pair<int, int>> virus, newVirus;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

void combination(int depth, int start){
    if(depth == m){
        fill(&time_check[0][0], &time_check[0][0]+51*51, 0);
        int res = 0;
        
        //원본 맵 보존
        int temp[51][51];
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                temp[i][j] = a[i][j];
            }
        }
        
        //바이러스 배치
        queue<pair<int, int>> q;
        for(const auto& coord : newVirus){
            q.push(coord);
            temp[coord.first][coord.second] = -1; //활성 바이러스 -1로 표시
        }
        
        //바이러스 퍼치기
        while(!q.empty()){
            int y = q.front().first;
            int x = q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int ny = y + dy[i];
                int nx = x + dx[i];
                if(ny<0 || nx<0 || ny>=n || nx>=n) continue;
                if(temp[ny][nx] == 2){
                    //비활성 바이러스인 경우
                    time_check[ny][nx] = time_check[y][x]+1;
                    //res = time_check[ny][nx];
                    temp[ny][nx] = -1;
                    q.push({ny, nx});
                    continue;
                }
                
                if(temp[ny][nx]==0){
                    time_check[ny][nx] = time_check[y][x]+1;
                    res = time_check[ny][nx];
                    temp[ny][nx] = -1; //감염
                    q.push({ny, nx});
                    
                }
            }
        }

        //모든 빈 칸이 감염되었는지 확인
        bool flag = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(temp[i][j]==0){
                    flag = false;
                    break;
                }
            }
        }
        
        //계산
        if(flag){
            ans = min(ans, res); 
        }
        return ;       
    }
    
    //m개 바이러스 조합
    for(int i=start; i<virus.size(); i++){
        newVirus.push_back({virus[i].first, virus[i].second});
        combination(depth+1, i+1);
        newVirus.pop_back();
    }
    
}

int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j]==2) virus.push_back({i, j});
        }
    }
    
    combination(0, 0);
    if(ans == 1e9) cout << -1;
    else cout << ans;
    
    return 0;
}