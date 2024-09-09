#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string word;
  cin >> word;

  for (int i = 0; i < 26; i++) {
    char alp = 'a' + i;
    if (word.find(alp) == string::npos)
      cout << "-1 ";
    else
      cout << word.find(alp) << " ";
  }

  return 0;
}