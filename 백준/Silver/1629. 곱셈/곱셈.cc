#include <iostream>
using namespace std;

long long int A, B, C;

long long int power(long long int x, long long int y){
    long long int h = 0;
    if (y == 0)
        return 1;
    else if (y == 1)
        return x;
    if (y % 2 > 0)
        return power(x, y-1) * x;
    h = power(x, y / 2);
    h %= C;
    return (h * h) % C;
}

int main(){
    cout.tie(0);
    cin.tie(0);

    cin >> A >> B >> C;
    cout << power(A, B) % C;
    return 0;
}