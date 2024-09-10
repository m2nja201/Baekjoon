#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  while (1) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 && b == 0 && c == 0)
      break;

    if (a * a + b * b == c * c)
      cout << "right";
    else if (b * b + c * c == a * a)
      cout << "right";
    else if (a * a + c * c == b * b)
      cout << "right";
    else
      cout << "wrong";
    cout << "\n";
  }

  return 0;
}