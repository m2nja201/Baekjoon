#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    
    int num, hole;
    int sum = 0;
    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> hole;
        sum += hole;
    }
    
    cout << sum - (num - 1);
    return 0;
}