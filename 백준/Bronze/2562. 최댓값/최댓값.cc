#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    
    int num[9];
    int temp = -1;
    int max = -1;

    for (int i = 0; i < 9; i++){
        cin >> num[i];
        if (max < num[i]){
            temp = i;
            max = num[i];
        }
    }

    cout << max << "\n" << temp + 1;
    return 0;
}