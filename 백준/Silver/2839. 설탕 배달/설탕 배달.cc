#include <iostream>
using namespace std;

// -- 5로 채울 수 있는 만큼 채워보면서 비교
int main() {
	int N;
	cin >> N;

	int min_five = N / 5 + 1;
	int min_cnt = 10000000;
	bool possible = false;

	while (min_five--) {
		int remain = N - min_five * 5;
		if (remain == 0) {
			cout << min_five;
			return 0;
		}
		if (remain % 3 == 0) {
			min_cnt = min(min_cnt, min_five + remain / 3);
			possible = true;
		}
	}

	if (possible == true) cout << min_cnt;
	else cout << "-1";

	return 0;
}