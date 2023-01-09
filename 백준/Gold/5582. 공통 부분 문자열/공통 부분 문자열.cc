#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// title : 공통 부분 문자열
// 유형 : DP(bottom up(반복문) 방식 사용)

string a, b;
int DP[4001][4001];

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    cin >> a >> b;
    DP[0][0] = 0;
    
    int max_num = 0;
    for (int i=0; i < a.size(); i++) {
        for (int j=0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                // 시작점
                if (i == 0 || j == 0) DP[i][j] = 1; // 시작위치는 1로 초기화
                else DP[i][j] = DP[i-1][j-1] + 1;
                // 만약 abcd, eabcd라고 했을 때
                // 0. DP[0][0]에는 a[i]!=b[j]이므로 걸리지 않아 0인 상태
                // 1. DP[0][1]에서 걸림 -> i=0이므로 1이 들어가게 됨.
                // 2. DP[1][2] = DP[0][1] + 1;  즉, a에서 DP[0][1]에 1을 넣어놨으니까 DP[1][2]는 1+1=2가 됨.
                // 3. DP[2][3] = DP[1][2] + 1;  즉, DP[2][3] = 2+1 = 3
                // 4. DP[3][4] = DP[2][3] + 1;  즉, DP[3][4] = 3+1 = 4

                // 5. DP[1][2] 부터 DP(반복문 방식)로 검사를 하면 3이 나오기 때문에 max에서 걸러짐.
                max_num = max(max_num, DP[i][j]);
            }
        }
    }
    cout << max_num;

    return 0;
}