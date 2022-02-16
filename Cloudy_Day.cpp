#include <bits/stdc++.h>
#include <utility>
using namespace std;




void solve(){
    int n; cin >> n;
    vector<int> p(n);
    for(int i=0;i<n;i++) cin >> p[i];

    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    int m; cin >> m;
    vector<int> y(m);
    for(int i=0;i<m;i++) cin >> y[i];
        
    vector<int> r(m);
    for(int i=0;i<m;i++) cin >> r[i];
        
    vector<pair<int, int>> cities;
    
    for(int i=0;i<n;i++) cities.push_back({});
    

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt = 1;
    //cin >> tt;

    while(tt--) solve();
}
