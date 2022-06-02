#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long sum = 0;
    int grade;
    for (int i = 0; i< 5; i++){
        cin >> grade;
        sum += grade;
    }
    cout << sum;
    return 0;
}