#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    getline(cin,s);
    //cout << s;
    int n = s.length();
    cout << boolalpha;
    bool a = (n > 4 && n < 25);

    bool b = isalpha(s[0]);
    bool c = (s[n - 1] != '_');
    bool d = true;


    for (int i = 0; i < n; i++)
    {
        if ((isalpha(s[i]) == false && isdigit(s[i]) == false && s[i] != '_'))
        {
            d = false;
            break;
        }
    }


    cout << (a && b && c && d);
    return 0;
}