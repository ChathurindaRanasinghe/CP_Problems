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
        int a,b,c,d,k;
        cin >> a >> b >> c >> d >> k;
        int mnstps = abs(a-c)+abs(b-d);
        cout << (mnstps<=k && (k-mnstps)%2==0? "YES":"NO") << nl;
    }
}