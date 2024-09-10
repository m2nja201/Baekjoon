#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  int cnt = 0;
  int total = 1;
  for (int i = n; i >= 2; i--) {
    total *= i;
    if (i % 125 == 0) {
      cnt += 3;
      total /= 125;
    } else if (i % 25 == 0) {
      cnt += 2;
      total /= 25;
    } else if (i % 5 == 0) {
      cnt++;
      total /= 5;
    }
  }

  cout << cnt;
  return 0;
}