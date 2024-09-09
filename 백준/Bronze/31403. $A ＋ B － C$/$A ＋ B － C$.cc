#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int stoi(string str, int size) {
  int num = 0;
  for (int i = 0; i < size; i++) {
    int n = str[i] - '0';
    num += n * pow(10, size - i - 1);
  }

  return num;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string a, b;
  int c;
  cin >> a >> b >> c;

  // num
  int n_answer = stoi(a, a.size()) + stoi(b, b.size()) - c;
  cout << n_answer << '\n';

  // string
  a = a.append(b);
  int answer = stoi(a, a.size());
  answer -= c;

  cout << answer;

  return 0;
}