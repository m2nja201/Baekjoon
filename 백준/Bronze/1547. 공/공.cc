#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int M; // 바꾼 횟수
    int x, y, tmp;
    int ball[3] = {1, 2, 3}; // ball[0] = 0+1번 컵 위치는 1, ball[1] = 1+1번 컵 위치는 2, ball[2] = 2+1번 컵 위치는 3

    cin >> M;
    for(int i= 0; i< M; i++){
        cin >> x >> y;
        tmp = ball[x - 1];
        ball[x - 1] = ball[y - 1];
        ball[y - 1] = tmp;
    }

    for (int j = 0; j < 3; j++){
        if (ball[j] == 1){
            cout << j+1;
            break;
        }
    }
    return 0;
}