/*
Author : Chathurinda Ranasinghe
Date   : 2022-02-07
Time   : 09:03:37
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define deb(x) cout << #x << " = " << x << "\n";
#define vi vector<int>
#define eb emplace_back
#define pb push_back
#define FOR(i, a, b) for (int i = a; i < b; i++)

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

struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};

string s;
int n;

void solve()
{
    cin >> s;
    for (int j = 1; j < s.length() / 2; j++)
    {
        int k = j;
        // deb(k);
        // cout << endl;
        for (int i = 0;;)
        {
            // deb(i);
            if (s.length() >= 2 * k + i)
            {
                int s1 = stoi(s.substr(i, k));
                int s2 = stoi(s.substr(i + k, k));
                int s3 = -1;
                if (s.length() >= 2 * k + i + 1)
                    s3 = stoi(s.substr(i + k, k + 1));
                // deb(s1);
                // deb(s2);
                // deb(s3);
                i += k;
                if (s1 + 1 == s2)
                {
                    //deb(i);
                    if (i + 2*k == s.length())
                    {
                        cout << "YES\n";
                        return;
                    }
                    continue;
                }
                else if (s1 + 1 == s3)
                {
                    //deb(i);
                    
                    if (i + 2*k + 1  == s.length())
                    {
                        cout << "YES\n";
                        return;
                    }
                    k++;
                }
                else
                    break;
            }
            else
                break;
        }
    }

    cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while (t--)
        solve();
}
