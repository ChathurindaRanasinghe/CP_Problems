#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--){
        ll n; cin >> n;
        int sum = 0;
        while(n>0 || sum > 9){
            if(n==0){
                n = sum; sum = 0;
            }
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }
}   