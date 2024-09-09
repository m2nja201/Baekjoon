#include <iostream>
#include <string>
using namespace std;

int ctoi(char c) {
  int num = c - '0';
  return num;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int N;
  string num;
  cin >> N >> num;

  int total = 0;
  for (int i = 0; i < N; i++) {
    total += ctoi(num[i]);
  }

  cout << total;

  return 0;
}