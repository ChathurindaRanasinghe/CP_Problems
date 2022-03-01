#include <bits/stdc++.h>
using namespace std;

int modpow(int x,int n,int m){
    if(n==0) return 1%m;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if(n%2==1) u = (u*x)%m;
    return u;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--){
        int n;
        cin >> n;
        cout << modpow(2,n-1,1e9+7) << "\n";
    }
}   