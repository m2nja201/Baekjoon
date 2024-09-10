#include <math.h>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;
  int t_size[6] = {0};

  for (int i = 0; i < 6; i++) {
    cin >> t_size[i];
  }

  int T, P;
  cin >> T >> P;

  int total_t = 0;
  for (int i = 0; i < 6; i++) {
    total_t += ceil((double)t_size[i] / T);
  }

  cout << total_t << "\n" << n / P << " " << n % P;

  return 0;
}