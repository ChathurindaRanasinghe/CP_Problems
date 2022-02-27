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
        int n; cin >> n;
        vector<int> a(n+1);
        for(int i=1;i<=n;i++){
            if(i == 1) a[i] = n;
            else a[i] = i-1;
        }
        for(int i=1;i<n+1;i++){
            cout << a[i] << " ";
        }
        cout << nl;
    }
}