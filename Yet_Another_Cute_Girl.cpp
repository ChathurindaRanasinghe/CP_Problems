#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    const int n = 1000000;
    bool is_prime[n+1];
    memset(is_prime,true,sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    int _ = 1;
    cin >> _;
    while (_--)
    {
        long long l, r;
        cin >> l >> r;
        int ans = 0;
        for (long long i=l;i<=r;i++){
            int cnt = 0;
            for(long long j=1;j<=sqrt(i);j++) cnt += 2*(i%j==0) - (i/j == j);
            ans += is_prime[cnt];
        }
        cout << ans << "\n";
    }
}