#include <iostream>
using namespace std;

long long value(int n){
    long long val = 0;

    for (int i = 1; i <= n; i++){
        val += i * (((i + 1) * (i + 2)) / 2);
    }
    return val;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int T;
    int n;

    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> n;
        cout << value(n) << "\n";
    }

    return 0;
}