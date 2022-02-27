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
    cin >> tt;
    
    while (tt--){
        int n;
        cin >> n;
        unordered_set<ll> s;
        vector<ll> a(n),b(n-1);
         for (int i = 0; i < n; i++) {                           
            cin >> a[i];
            s.insert(a[i]);            
        } 
        read(b,n-1);
        srt(a);srt(b);
        ll d1,d2;
        d1 = b[0] - a[0];
        d2 = b[0] - a[1];
        int ans = d2;
        for(auto &i:b){
            if(s.count(i-ans) == 0){
                ans = d1;break;
            }
        }
        
        if(ans<=0) ans = d1;
        cout << ans << nl;
        
    }
}   