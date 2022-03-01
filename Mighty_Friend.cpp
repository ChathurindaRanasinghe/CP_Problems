#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    long long motu, tomu;
    motu = tomu = 0;
    vector<int> m, t;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i % 2 == 0)
            motu += a[i], m.push_back(a[i]);
        else
            tomu += a[i], t.push_back(a[i]);
    }

    if (tomu > motu){
        cout << "YES\n";
        return;
    }
    sort(m.rbegin(), m.rend());
    sort(t.begin(), t.end());
    for (int i = 0; i < k && i < min(n / 2, (n + 1) / 2); i++){
        tomu = tomu - t[i] + m[i];
        motu = motu - m[i] + t[i];
        if (tomu > motu){
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
    return;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int _ = 1;
    cin >> _;
    while (_--)
        solve();
    
}