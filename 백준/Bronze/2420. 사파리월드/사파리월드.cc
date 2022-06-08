#include <iostream>
using namespace std;

int main(){
    long long N, M;
    long long sub = 0;

    cin >> N >> M;
    sub = N - M;
    
    if (sub >= 0) cout << sub;
    else cout << sub*(-1);
    return 0;
}