#include <math.h>
#include <iostream>
using namespace std;

int isprime(int n) {
  for (int i = 2; i <= ((int)sqrt(n) + 1); i++) {
    if (n % i == 0)
      return 0;  // not prime
  }
  return 1;  // prime
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if (num == 1)
      continue;
    if (num == 2 || num == 3) {
      cnt++;
      continue;
    }
    if (isprime(num) == 1) {
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}