#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,a,b;
    cin >> x  >> a >> b;
    if(a + 2*b >= x){
        cout << "Qualify\n";
        return;
    }
    cout << "NotQualify\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    
}   