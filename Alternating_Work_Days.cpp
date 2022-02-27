#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes "YES"
#define no "NO"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int a,b,p,q;
        cin >> a >> b >> p >> q;
        cout << ((p%a ==0 && q%b == 0 && (p/a == q/b || p/a == q/b + 1 ||  p/a + 1 == q/b))? yes:no) << nl;
    }
}