#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vector<pair<string,string>> a(n);
    for(auto &i:a) cin >> i.first >> i.second;
    sort(a.begin(),a.end());
    for(auto &i:a){
        string s,ss;
        s = i.first;
        ss = i.second;
        if(s=="correct"){
            for(auto &c:ss){
                if(c=='0'){
                    cout << "INVALID\n";
                    return;
                }
            }
        }
        if(s=="wrong"){
            bool flag = true;
            for(auto &c:ss){
                if(c=='0') flag = false;
            }
            if(flag){
                cout << "WEAK\n";
                return;
            }
        }
    }
    cout << "FINE\n";
    return;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--){
        solve();
    }
}   