#include <iostream>
using namespace std;

// title : 멀티탭 스케줄링 (1700)
// level : Gold I

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K; // 멀티탭 구멍의 개수, 전기용품의 총 사용횟수
    cin >> N >> K;

    int *order = new int[K]; // 순서 받기
    for (int i=0; i<K; i++) {
        cin >> order[i];
    }

    int *tap = new int[N]; // 초기 멀티탭 사용
    for (int k=0; k<N; k++) {
        tap[k] = 0;
    }

    int cnt = 0;
    for (int j=0; j<K; j++) {
        bool pass = false;
        // 이미 꽂혀있는지 확인
        for (int i=0; i<N; i++) {
            if (order[j] == tap[i]) {
                pass = true;
                break;
            }
        }
        if (pass) continue;

        // 빈 곳이 있는지 확인
        for (int i=0; i<N; i++) {
            if (tap[i] == 0) {
                tap[i] = order[j];
                pass = true;
                break;
            }
        }
        if (pass) continue;

        // 그 외
        int pos = -1; // 멀티탭에서 뺄 자리
        int idx = -1; // schedule이 가장 나중에 잡혀있는 것
        for (int i=0; i<N; i++) { // 멀티탭 번아 가면서 확인
            int tmp = 0; // 순서를 확인해야하므로
            for (int k=j+1; k<K; k++) { 
                if (tap[i] == order[k]) break; // 그 다음 스케줄 중에 멀티탭에 꽂혀있는 전자기기가 잡혀있다면
                tmp++;
            }
            if (tmp > idx) {
                pos = i;
                idx = tmp;
            }
        }
        tap[pos] = order[j];
        cnt++;
    }
    cout << cnt;
    return 0;
}