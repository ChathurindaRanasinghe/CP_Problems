#include <bits/stdc++.h>
using namespace std;

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

int n, m;
int arr[500][500];

bool check(int i, int j)
{
    if ( j >= 0 && j < m && i >= 0 && i < n)
        return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    while (tt--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        }

        bool flag = 0;
        int ans = 2;
        while (true)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (arr[i][j] == ans)
                    {
                        if (check(i + 1, j) && arr[i + 1][j] == 1)
                        {
                            arr[i + 1][j] = arr[i][j] + 1;
                            flag = true;
                        }
                        if (check(i, j + 1) && arr[i][j + 1] == 1)
                        {
                            arr[i][j + 1] = arr[i][j] + 1;
                            flag = true;
                        }
                        if (check(i - 1, j) && arr[i - 1][j] == 1)
                        {
                            arr[i - 1][j] = arr[i][j] + 1;
                            flag = true;
                        }
                        if (check(i, j - 1) && arr[i][j - 1] == 1)
                        {
                            arr[i][j - 1] = arr[i][j] + 1;
                            flag = true;
                        }
                    }
                }
            }

            if (!flag)
                break;
            flag = false;
            ans++;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1){
                    cout << -1;
                    return 0;
                }
                    
            }
        }

        cout << ans - 2;
    }
}