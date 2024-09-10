#include <iostream>
using namespace std;

int n_length(int n) {
  int cnt = 1;
  while (n / 10 > 0) {
    cnt++;
    n /= 10;
  }
  return cnt;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  int n_size = n_length(n);
  int start;
  start = n / 2 > n - 9 * n_size ? n / 2 : n - 9 * n_size;

  for (int i = start; i <= n - n_size; i++) {
    int num = i;
    int n_temp = i;
    while (n_temp != 0) {
      num += n_temp % 10;
      n_temp /= 10;
    }
    if (num == n) {
      cout << i;
      return 0;
    }
  }
  cout << "0";

  return 0;
}