/*
Author : Chathurinda Ranasinghe
Date   : 2022-02-05
Time   : 12:34:13
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define deb(x) cout<<#x << " = " << x << "\n";
#define vi vector<int>
#define eb emplace_back
#define pb push_back
#define FOR(i,a,b) for(int i=a;i<b;i++)

#define re_srt(a) sort(a.rbegin(),a.rend())
#define srt(a) sort(a.begin(),a.end())
#define all(a) a.begin(),a.end()

#define read(a,n){for(int i=0;i< n;i++){ cin >> a[i];}}

struct hash_pair{template <class T1,class T2>size_t operator()(const pair<T1,T2>& p) const{auto hash1 = hash<T1>{}(p.first);auto hash2=hash<T2>{}(p.second);return hash1^hash2;}};

string s; ll n;

long long compute_hash(string s) {
    reverse(s.begin(),s.end());
    const int p = 131;
    const int m = 1e9 + 7;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

void solve(){
    int col;
    string action,pwd;
    cin >> n >> col;
    FOR(i,0,n){
        cin >> action;
        if(action == "setPassword"){
            cin >> s;
            pwd = s;
        }
        else{
            ll test; cin >> test;
             //deb(compute_hash(pwd));
            if(compute_hash(pwd) == test){
                cout << 1 << endl;
            }else{
                bool flag = false;
                FOR(i,32,128){
                    string temp = pwd;
                    temp += char(i);
                    if(compute_hash(temp) == test){
                        cout << 1 << endl;
                        flag = true;
                        break;
                    }
                }
                if(flag==false) cout << 0 << endl;
            }
        }
        

    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
     while(t--)
        solve();
}
