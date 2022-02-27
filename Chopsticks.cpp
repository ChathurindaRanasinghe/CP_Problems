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
    while (tt--){
        int n,d;
        cin >> n >> d;
        vector<int> a(n);
        read(a,n);
        srt(a);
        int cnt = 0;
        bool cd;
        for(int i=0;i<n-1;) cd = (a[i+1] - a[i] <= d), cnt += cd, i += (1+cd);
        cout << cnt << nl;
    }
}   