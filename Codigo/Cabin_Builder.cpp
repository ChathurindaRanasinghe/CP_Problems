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

int c[500][500], r[500][500];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        int a, b;
        cin >> a >> b;
        vector<string> arr(a);
        read(arr, a);

        for (int i = a - 1; i >= 0; i--)
        {
            for (int j = b - 1; j >= 0; j--)
            {
                if ('x' == arr[i][j])
                {
                    r[i][j] = c[i][j] = -1;
                }
                else
                {
                    r[i][j] = r[i][j + 1] + 1;
                    c[i][j] = c[i + 1][j] + 1;
                }
            }
        }

        int mx = 0;

        for (int x = 0; x < a; x++)
            for (int y = 0; y < b; y++)
            {
                for (int i = r[x][y]; i > 0; i--)
                    for (int j = c[x][y]; j > 0 && j + i > mx; j--)
                    {
                        if (r[x + j][y] >= i && c[x][y + i] >= j)
                            mx = i + j;
                    }
            }

        if (0 == mx)
        {
            cout << "impossible";
        }
        else
        {
           cout << mx * 2;
        }
    }
}