#include <iostream>
using namespace std;

int main(){
    int time[4];
    int x, y;
    int sum = 0;
    
    for (int i=0; i<4; i++){
        cin >> time[i];
        sum += time[i];
    }
    
    cout << sum / 60 << "\n" << sum % 60;
    return 0;
}