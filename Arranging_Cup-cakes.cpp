#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--){
        int n; 
        cin >> n;
        int mn = INT_MAX;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0) mn = min(mn,abs(i-(n/i)));
        }
        cout << mn << '\n';
    }
}   