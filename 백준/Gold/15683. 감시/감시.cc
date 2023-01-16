#include <iostream>
using namespace std;

// 감시(15683)
// 골드 IV

struct CCTV {
    int x;
    int y;
};

// 방향 idx  0   1   2   3
int dy[4] = {0, 1, 0, -1}; 
int dx[4] = {1, 0, -1, 0}; // 우 상 좌 하
// 회전 : idx + 1

int map[8][8];
CCTV cam[8]; // 최대 8개;
int camNum = 0;
int N, M; // 세로, 가로
int blind = 64; // 사각지대 개수 : 최대 8*8=64개


// 배열 복사 함수
void cpArr(int dest[8][8], int src[8][8]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            dest[i][j] = src[i][j];
        }
    }
}

// 이동 함수
void move(int x, int y, int d) {
    d %= 4; // 0~3
    while (1) {
        int xx = x + dx[d]; x = xx;
        int yy = y + dy[d]; y = yy;
        if (xx < 0 || xx >= N || yy < 0 || yy >= M) return ; // 범위 넘어감
        if (map[xx][yy] == 6) return; // 벽
        if (map[xx][yy] != 0) continue; // cctv
        map[xx][yy] = '#'; // 감시 가능한 곳
    }
}

// 회전 함수
void rotate(int idx) {
    // 모든 cctv를 다 확인한 경우 : 0(사각지대)를 찾아 개수 count
    if (idx == camNum) {
        int temp = 0;
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                if (map[i][j] == 0) temp++;
            }
        }
        blind = min(blind, temp);
        return ;
    }

    // 캠 위치
    int x = cam[idx].x;
    int y = cam[idx].y;
    int cpMap[8][8];
    cpArr(cpMap, map);

    // 회전 (우, 상, 좌, 하)
    for (int d=0; d<4; d++) {
        cpArr(cpMap, map);

        if (map[x][y] == 1) {           // 1번 cctv(우)
            move(x, y, d);            
        } else if (map[x][y] == 2) {    // 2번 cctv(우, 좌)
            move(x, y, d);       
            move(x, y, d+2);            
        } else if (map[x][y] == 3) {    // 3번 cctv(우, 상)
            move(x, y, d);
            move(x, y, d+1);
        } else if (map[x][y] == 4) {    // 4번 cctv(우, 상, 좌)
            move(x, y, d);        
            move(x, y, d+1);
            move(x, y, d+2);
        } else if (map[x][y] == 5) {     // 5번 cctv(우, 상, 좌, 하)
            move(x, y, d);
            move(x, y, d+1);
            move(x, y, d+2);
            move(x, y, d+3);
        }

        rotate(idx + 1); // 다른 cctv 회전
        cpArr(map, cpMap);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> map[i][j];
            if (map[i][j] != 0 && map[i][j] != 6) { 
                // cctv가 있다면 해당 위치를 저장
                cam[camNum].x = i;
                cam[camNum].y = j;
                camNum++;
            } 
        }
    }
    rotate(0); // 0번째 cctv부터 회전
    cout << blind;

    return 0;
}