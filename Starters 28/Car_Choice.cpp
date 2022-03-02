#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x1,x2,y1,y2;
    cin >> x1 >> x2 >> y1 >> y2;
    int d1 = y1*x2;
    int d2 = y2*x1;
    if(d1> d2) cout << 1;
    else if(d1 < d2) cout << -1;
    else cout << 0;
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    
}   