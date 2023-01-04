#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
#define endl "\n"

int maxgap(int *arr, int n) {
    int gap = 0;
    for (int i = 1; i < n; i++) {
        gap = max(gap, arr[i] - arr[i-1]);
    }
    return gap;
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    int K; // 반의 수
    cin >> K;
    
    for (int i = 0; i < K; i++) {
        int N; // 학생 수
        cin >> N;
        int *stuGrade = new int[N]; // 학생 성적 배열
        for (int j = 0; j < N; j++) {
            cin >> stuGrade[j];
        }
        sort(stuGrade, stuGrade + N);
        printf("Class %d\nMax %d, Min %d, Largest gap %d\n", i+1, stuGrade[N-1], stuGrade[0], maxgap(stuGrade, N));
    }

    return 0;
}