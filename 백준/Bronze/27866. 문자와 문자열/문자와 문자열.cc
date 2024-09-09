#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string word;
  int n;

  cin >> word;
  cin >> n;
  cout << word[n - 1];

  return 0;
}