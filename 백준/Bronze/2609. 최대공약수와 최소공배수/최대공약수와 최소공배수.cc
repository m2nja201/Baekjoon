#include <math.h>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int a, b;
  cin >> a >> b;

  int c_div = 1, c_mult = 1;
  int i = 2;
  int min_v = min(a, b);

  while (1) {
    if (a % i == 0 && b % i == 0) {
      c_div *= i;
      a /= i;
      b /= i;
      // cout << "Divided by " << i << endl;
    } else {
      if (i > min_v) {
        c_mult = c_div * a * b;
        break;
      }
      i++;
    }
  }

  cout << c_div << '\n' << c_mult;

  return 0;
}