#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int H, W, N;
    cin >> H >> W >> N;

    int floor, room;

    if (N <= H) {
      room = 1;
      floor = N % H == 0 ? H : N % H;
    } else {
      floor = N % H == 0 ? H : N % H;
      room = N % H == 0 ? N / H : N / H + 1;
    }

    int roomnum = floor * 100 + room;
    cout << roomnum << endl;
  }

  return 0;
}