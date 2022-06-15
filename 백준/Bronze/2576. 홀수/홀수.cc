#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    
    int sum = 0;
    int min = 100;
    int num;
    
    for (int i = 0; i< 7; i++){
        cin >> num;
        if (num % 2 == 1){
            min = (min > num)? num : min;
            sum += num;
        }
    }
    
    if (sum == 0) cout << "-1";
    else
        cout << sum << "\n" << min;
    return 0;
}