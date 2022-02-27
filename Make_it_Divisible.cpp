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
        int n;cin>>n;
        string s;
        if(n==1) s="3";
        else{
            s = "2";
            n-=2;
            while(n--) s += "0";
            s += "1";
        }
        cout << s  << nl;
    }
}