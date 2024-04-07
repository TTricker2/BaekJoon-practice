#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m, answer=0;
vector<pair<int, int>> wall, virus, newWall;
int a[10][10];
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

int safeZoneCnt(){
    int temp[10][10];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            temp[i][j] = a[i][j];
        }
    }
    
    //벽 설치
    for(const auto& coord : newWall){
        temp[coord.first][coord.second] = 1;
    }
    
    //초기 바이러스 좌표 넣기
    queue<pair<int, int>> q;
    for(const auto& coord : virus){
        q.push(coord);
    }
    
    //바이러스 퍼치기
    while(!q.empty()){
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(nx<0 || ny<0 || nx>=m || ny>=n) continue;
            if(temp[ny][nx] == 0){
                temp[ny][nx] = 2;
                q.push({ny, nx});
            }
        }
    }
    
    //안전지대 세기
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(temp[i][j] == 0) cnt++;
        }
    }
    return cnt;
}


void combination(int depth, int start){
    if(depth == 3){
        //좌표 3개 고르면 할 일: 바이러스 퍼치기
        answer = max(answer, safeZoneCnt());
        return ;
    }
    for(int i=start; i<wall.size(); i++){
        newWall.push_back({wall[i].first, wall[i].second});
        combination(depth+1, i+1);
        newWall.pop_back();
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            if(a[i][j] == 0) wall.push_back({i, j});
            if(a[i][j] == 2) virus.push_back({i, j});
        }
    }
    combination(0, 0);
    cout << answer << "\n";
    
    return 0;
}