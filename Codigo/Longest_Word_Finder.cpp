#include <bits/stdc++.h>
using namespace std;

#define nl "\n"



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--){
        string s;
        vector<string> a;
        while(cin >> s){
            string b;
            for(int i=0;i<int(s.length());i++){
                if(isalpha(s[i]) || isdigit(s[i])) b += s[i];
            }

            a.push_back(b);
        }
        int ans = -1;
        string as;
        for(int i=0;i<int(a.size());i++){
            if( int(a[i].length())>ans){
                as = a[i];
                ans = a[i].length();
            }
        }
       for(int i=0;i<int(a.size());i++){
           if(int(a[i].length())==ans){
               as = a[i];
               break;
           }
       }
       cout << as << nl;
    }
}   