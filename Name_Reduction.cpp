#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--){
        string s,ss;
        cin >> s >> ss;
        int n;cin >> n;
        vector<string> a(n);
        for(auto &i:a) cin >> i;
        map<char,int> parent;
        for(auto &i:s) parent[i]++;
        for(auto &i:ss) parent[i]++;
        map<char,int> children;
        for(auto &i:a){
            for(auto &j:i){
                children[j]++;
            }
        }
        bool flag = true;
        for(auto &i:children){
            if(parent.count(i.first)==0){
                flag = false;
                break;
            }
            else if(i.second > parent[i.first]){
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}   