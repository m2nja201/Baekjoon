#include <iostream>
#include <algorithm>
using namespace std;
#define endl "\n"

// title : ATM
// level : silver IV

int main(){
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    int* times = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> times[i];
    }

    sort(times, times+N);
    
    int result = 0;
    for (int j = 0; j < N; j++) {
        result += (N-j) * times[j];
    }
    cout << result;
    return 0;
}