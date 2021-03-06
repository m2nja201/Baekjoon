#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int n;
    int num[3];
    int max = 0;
    cin >> n;
    vector<int> arr(n);

    for (int i =0; i< n; i++){
        int tmp;
        for (int j = 0; j < 3; j++){
            cin >> num[j];
        }

        sort(num, num+3);
        for (int j = 0; j < 3; j++){
            int cnt = 0;
            for (int k = j; k < 3; k++){
                if (num[k] == num[j]){
                    cnt++;
                }
            }
            
            if (cnt == 3) {
                arr[i] = 10000 + num[j] * 1000;
                break;
            }
            else if (cnt == 2) {
                arr[i] = 1000 + num[j] * 100;
                break;
            }
            if(j == 2) arr[i] = num[j] * 100;
        }
    }

    for(int y = 0; y < n; y++){
        if (max < arr[y]){
            max = arr[y];
        }
    }
    cout << max;
    return 0;
}