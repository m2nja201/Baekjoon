#include <iostream>
#include <math.h>
using namespace std;
#define endl "\n"

// title : 계단 오르기
// 유형 : DP (Bottom up 방식(반복문) 사용)

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int num;
    cin >> num;

    int *grade = new int[num+1];
    for (int i=1; i<=num; i++) {
        cin >> grade[i];
    }
    grade[0] = 0;

    int *DP = new int[num];

    // 기저
    DP[1] = grade[1];
    DP[2] = grade[1] + grade[2];
    DP[3] = max(grade[1] + grade[3], grade[2] + grade[3]);

    
    // DP
    for (int i=4; i<= num; i++) {
        DP[i] = DP[i-3] + grade[i-1] + grade[i];
        DP[i] = max(DP[i], DP[i-2] + grade[i]);
    }
    cout << DP[num];

    return 0;
}