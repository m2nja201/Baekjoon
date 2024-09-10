#include <iostream>
using namespace std;

int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }

  return result;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, k;
  cin >> n >> k;

  int answer = factorial(n) / ((factorial(n - k) * factorial(k)));
  cout << answer;

  return 0;
}