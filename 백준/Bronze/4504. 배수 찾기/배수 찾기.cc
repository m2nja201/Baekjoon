#include <iostream>
using namespace std;
#define endl "\n"

int main () {
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    
    int num;
    while (1) {
        cin >> num;
        if (num == 0) break;
        if (num % n == 0) cout << num << " is a multiple of " << n << "." << endl;
        else cout << num << " is NOT a multiple of "<<n << "." << endl;
    }
    return 0;
}