#include <iostream>
using namespace std;

int dist = 2147483647;

void height(int y, int h){
    if (y < dist) dist = y;
    if (h - y < dist) dist = h - y;
}

void width(int x, int w){
    if (x < dist) dist = x;
    if (w - x < dist) dist = w - x;
}

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    
    int x, y, w, h;
    
    cin >> x >> y >> w >> h;
    height(y, h);
    width(x, w);
    cout << dist;
    
    return 0;
}