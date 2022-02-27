#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes "YES"
#define no "NO"

typedef long long ll;

#define deb(x) cout << #x << " = " << x << "\n";

#define re_srt(a) sort(a.rbegin(), a.rend())
#define srt(a) sort(a.begin(), a.end())
#define all(a) a.begin(), a.end()

#define read(a, n)                  \
    {                               \
        for (int i = 0; i < n; i++) \
        {                           \
            cin >> a[i];            \
        }                           \
    }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--){
       int n; 
       cin >> n;
       vector<int> a(n);
       read(a,n);
       map<int,int> h;
       for(int i=0;i<n;i++) h[a[i]]++;
       int cnt = 0;
       for(auto v:h){
           cnt += (v.second/2);
       }
       cout << cnt << nl;
    }
}   