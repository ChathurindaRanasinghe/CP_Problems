#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define yes "YES"
#define no "NO"

typedef long long ll;

#define deb(x) cout << #x << " = " << x << "\n";
#define srt(a) sort(a.begin(), a.end())
#define re_srt(a) sort(a.rbegin(), a.rend())
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
    while (tt--)
    {
        ll n;
        cin >> n;
        
        vector<pair<ll, ll>> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
    
        map<ll,vector<pair<ll,ll>>> h;

        for(int i=0;i<n;i++){
            h[a[i].second].push_back(a[i]);
        }

        for(auto &v:h){
            srt(v.second);
        }

        for(auto v:h){
            for(auto i: v.second){
                cout << i.first << " " << i.second << nl;
            }
        }

        
    }
}