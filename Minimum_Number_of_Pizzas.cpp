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
        int n,k; cin >> n >> k;
        cout << n / __gcd(n,k) << nl;
    }
}