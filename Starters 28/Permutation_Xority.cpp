#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n==2){
        cout << -1 << endl;
        return;
    }
    vector<int> a(n);
    for(int i=0;i<n;i++) a[i] = i+1;
    if(n%2==1){
        for(int i=0;i<n;i++) cout << a[i] << " ";
    }else{
        swap(a[n-3],a[n-1]);
        swap(a[n-2],a[n-1]);
        for(int i=0;i<n;i++) cout << a[i] << " ";
    }
    
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    
}   