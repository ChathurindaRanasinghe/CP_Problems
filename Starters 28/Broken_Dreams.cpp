#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    string s,ss;
    cin >> s;
    ss = s;
    sort(ss.begin(),ss.end());
    cout << ss;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    
}   


//aaaabcccdddeee