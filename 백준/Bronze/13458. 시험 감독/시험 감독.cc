#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

/*
학생 수 A명
총 감독관은 B명 감시, -> 무조건 1명
부 감독관은 C명 감시, -> 여러명 가능 
*/

using namespace std;
int N, B, C;
vector<int> A;

int main()
{
    cin >> N;
    A.resize(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    cin >> B >> C;
    
    unsigned long long answer=N;
    for(int i=0; i<N; i++){
        int temp = A[i] - B; //부감독이 감시해야 하는 수
        if(temp < 0) temp = 0;
        answer += ceil((double)temp/C);
        
    }
    cout << answer << "\n";
    
    
    
    return 0;
}
