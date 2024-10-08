#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  int min_v = 1000001;
  int max_v = -1000001;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (min_v > num)
      min_v = num;
    if (max_v < num)
      max_v = num;
  }

  cout << min_v << " " << max_v;

  return 0;
}