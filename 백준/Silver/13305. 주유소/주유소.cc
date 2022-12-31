#include <iostream>
#include <algorithm>
using namespace std;
#define endl "\n"

// title : 주유소 (13305)
// level : SilverIII
// 48점 맞고 retry (int형을 long long 타입으로 변경)

int main(){
    cin.tie(0); cout.tie(0);
    int N; // 도시의 개수
    cin >> N;
    
    long long* distance = new long long[N - 1]; // 도시 간의 거리
    for (int i = 0; i < N - 1; i++) {
        cin >> distance[i];
    }

    long long* cost = new long long[N]; // 1리터당 가격
    for (int j = 0; j < N; j++) {
        cin >> cost[j];
    }

    long long total = 0;
    for (int k = 0; k < N-1; k++) {
        if (cost[k] < cost[k+1]) {
            cost[k+1] = cost[k];
        }
        total += cost[k] * distance[k];
    }
    cout << total;
    return 0;
}