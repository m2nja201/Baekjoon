#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    
    int sum = 0;
    int ave = 0;
    int score;
    for (int i = 0; i < 5; i++){
        cin >> score;
        if (score < 40) score = 40;
        sum += score;
    }
    
    ave = sum / 5;
    cout << ave;
    return 0;
}