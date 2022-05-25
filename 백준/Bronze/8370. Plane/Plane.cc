#include <iostream>
using namespace std;

int main(){
    cout.tie(0);
    cin.tie(0);
    
    int a, b, c, d;
    cin >> a >> b>> c >> d;
    cout << a*b + c*d;
    return 0;
}