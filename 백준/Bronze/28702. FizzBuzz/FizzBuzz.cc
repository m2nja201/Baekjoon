#include <iostream>
#include <string>
using namespace std;

string str[3];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int idx = 0;
  for (int i = 0; i < 3; i++) {
    cin >> str[i];
    if (str[i] != "Fizz" && str[i] != "Buzz" && str[i] != "FizzBuzz")
      idx = i;
  }

  int num = stoi(str[idx]);
  num = num + (3 - idx);

  if (num % 3 == 0 && num % 5 == 0)
    cout << "FizzBuzz";
  else if (num % 3 == 0 && num % 5 != 0)
    cout << "Fizz";
  else if (num % 3 != 0 && num % 5 == 0)
    cout << "Buzz";
  else
    cout << num;

  return 0;
}