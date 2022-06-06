#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long x, y;
    while(1){
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        if (x > y) cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}