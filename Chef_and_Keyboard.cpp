#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int _ = 1;
    cin >> _;
    while (_--)
    {
        int n, m, c;
        cin >> n >> m >> c;
        int cnt = 0;
        for (int i = 1; i <= sqrt(c); i++)
            cnt += (c % i == 0 && i <= n && c / i <= m) + (c % i == 0 && i <= m && c / i <= n && i != c/i);
        cout << cnt << "\n";
    }
}