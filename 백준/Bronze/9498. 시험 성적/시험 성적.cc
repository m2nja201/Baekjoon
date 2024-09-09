#include <iostream>
using namespace std;

int main() {
  int score;
  cin >> score;

  int first = score / 10;
  if (first >= 9)
    cout << "A";
  else if (first >= 8)
    cout << "B";
  else if (first >= 7)
    cout << "C";
  else if (first >= 6)
    cout << "D";
  else
    cout << "F";

  return 0;
}