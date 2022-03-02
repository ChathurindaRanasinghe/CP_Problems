#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    set<int> a;
    a.insert(6);
    a.insert(7);
    a.insert(13);
    a.insert(14);
    a.insert(20);
    a.insert(21);
    a.insert(27);
    a.insert(28);

    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.insert(x);
    }
    cout << a.size() << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    
}   