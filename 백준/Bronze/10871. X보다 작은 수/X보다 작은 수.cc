#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> arr;

  int num;
  for (int i = 0; i < n; i++) {
    cin >> num;
    if (num < k)
      arr.push_back(num);
  }

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}