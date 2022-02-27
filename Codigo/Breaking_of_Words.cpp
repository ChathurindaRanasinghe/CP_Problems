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

void func(vector<string> &res,string s,vector<string> &dic,string str,string temp,int pos)
{
    if (pos >= int(s.size())){
        str.pop_back();
        res.push_back(str);
        return;
    }
    string dm = str;
    for (int i = pos; i < int(s.size()); i++){
        temp += s[i];
        for (int j=0;j<int(dic.size());j++)
        {
            if (temp == dic[j])
            {
                str = str + temp + " ";
                func(res, s, dic, str, "", i + 1);
                str = dm;
                break;
            }
        }
    }
}
vector<string> solve(string s, vector<string> &dic)
{
    vector<string> res;
    func(res, s, dic, "", "", 0);
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--)
    {
        vector<string> dic;
        int n;
        cin >> n;
        string s;
        while(n--){
            cin >> s;
            dic.emplace_back(s);
        }
        string sentence;
        cin >> sentence;
        vector<string> ans = solve(sentence,dic);
        for(int i=0;i<int(ans.size());i++){
            cout << ans[i] << nl;
        }
    }
}