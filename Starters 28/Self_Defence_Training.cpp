#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        cnt += (x>=10 && x<=60);
    }
    cout << cnt << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    
}   