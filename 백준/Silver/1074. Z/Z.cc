#include <math.h>

#include <iostream>

using namespace std;
int r, c;
int cnt = 0;

// x : x 좌표, y : y 좌표
// size : 찾는 범위
// r, c : 찾아야 하는 좌표
void Z(int x, int y, int size) {
  // 찾았다!
  if (y == r && x == c) {
    cout << cnt;
    exit(0);
  }
  // 찾는 범위
  if (r >= y && r < y + size && c >= x && c < x + size) {
    // 1사분면
    Z(x, y, size / 2);
    // 2사분면
    Z(x + size / 2, y, size / 2);
    // 3사분면
    Z(x, y + size / 2, size / 2);
    // 4사분면
    Z(x + size / 2, y + size / 2, size / 2);
  } else {               // 범위 밖
    cnt += size * size;  // 만약 다른 사분면에 있던 거면 size * size 만큼
                         // 더해주면 되는 거임.
  }
}

int main() {
  int cnt = 0;
  int N;

  // 입력
  cin >> N >> r >> c;

  // 함수 사용
  Z(0, 0, pow(2, N));

  return 0;
}