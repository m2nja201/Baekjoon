#include <iostream>
using namespace std;

int main(){
    cout.tie(0);
    cin.tie(0);
    
    int L;
    cin >> L;
    
    cout << (L - 1) / 5 + 1;
    return 0;
}