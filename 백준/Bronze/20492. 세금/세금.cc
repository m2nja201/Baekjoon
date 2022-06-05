#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    
    int money;
    int a = 0, b = 0;
    cin >> money;
    a = money * 0.78;
    b = money * (0.8 + 0.2 * 0.78);
    cout << a << " " << b;
    
    return 0;
}