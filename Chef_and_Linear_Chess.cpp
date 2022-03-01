#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &i:a) cin >> i;
        int mn = INT_MAX,ans;
        for(auto i:a){
            if(k%i==0){
                mn = min(mn,k/i);
                ans = (mn == k/i? i:ans);
            } 
        }
            
        if(mn== INT_MAX) ans = -1;
        cout << ans << "\n";
    }
}   