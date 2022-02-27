#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int u,v,a,s;
        cin >> u >> v >> a >> s;
        cout << (v*v >= u*u - 2*a*s? "YES":"NO") << nl;
    }
}