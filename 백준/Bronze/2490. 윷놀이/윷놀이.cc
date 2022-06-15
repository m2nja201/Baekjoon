#include <iostream>
using namespace std;

void whichone(int sum){
    if (sum == 3) // 도
        cout << 'A';
    else if (sum == 2) // 개
        cout << 'B';
    else if (sum == 1) // 걸
        cout << 'C';
    else if (sum == 0) // 윷
        cout << 'D';
    else // 모
        cout << 'E';
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);  cin.tie(0);
    
    int num;
    for (int i = 0; i < 3; i++){
        int sum = 0;
        for (int j = 0; j < 4; j++){
            cin >> num;
            sum += num;
        }
        whichone(sum);
    }
    
    return 0;
}