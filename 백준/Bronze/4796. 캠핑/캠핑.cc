#include <iostream>
using namespace std;
#define endl "\n"

// title : 캠핑\
// level : bronze 1
// content : 캠핑장의 경고문 -> 캠핑장은 연속하는 20일 중 10일 동안만 사용할 수 있다.
// 강산이는 이제 막 28일 휴가를 시작했다. 이번 휴가 기간 동안 강산이는 캠핑장을 며칠동안 사용할 수 있을까?
// 캠핑장은 연속하는 P일 중, L일 동안만 사용할 수 있다. 강산이는 이제 막 V일 짜리 휴가를 시작했다.
// 강산이가 캠핑장을 최대 며칠동안 사용할 수 있을까? (1 < L < P < V)

int main(){
    cout.tie(0);
    cin.tie(0);
    
    int cnt = 1;
    while (1) {
        int L, P, V;
        cin >> L >> P >> V;

        if (L==0 && P==0 && V==0) break;
        int use = V / P;
        int remain = V % P;
        if (L < remain) remain = L;

        int result = L * use + remain;

        cout << "Case "<< cnt << ": " << result << endl;
        cnt++;
    }
    return 0;
}