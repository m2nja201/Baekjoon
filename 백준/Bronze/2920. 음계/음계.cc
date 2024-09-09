#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int flag = 8;
  for (int i = 0; i < 8; i++) {
    int n;
    cin >> n;

    if (i == 0 && n != 8 && n != 1) {
      cout << "mixed";
      break;
    }
    if (i == 0 && n == 1)
      flag = 1;

    if (flag == 1) {
      if (n != i + 1) {
        cout << "mixed";
        break;
      }
      if (i == 7) {
        cout << "ascending";
        break;
      }
    } else {
      if (n != 8 - i) {
        cout << "mixed";
        break;
      }
      if (i == 7) {
        cout << "descending";
        break;
      }
    }
  }

  return 0;
}