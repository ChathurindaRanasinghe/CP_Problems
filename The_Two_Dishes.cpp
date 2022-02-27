#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--){
        int n,s;
        cin >> n >> s;
        cout << (n>=s? s:2*n-s) << endl;
     
    }
}