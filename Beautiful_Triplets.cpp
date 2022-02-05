/*
Author : Chathurinda Ranasinghe
Date   : 2022-02-05
Time   : 08:33:45
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

void solve(){
    int d;
    cin >> n >> d;
    vi a(n);
    read(a,n);
    int cnt = 0;
    if (n<3){
        cout << cnt << endl;
        return;
    }
    FOR(i,0,n){
        FOR(j,i+1,n){
            if(a[j]-a[i]>d) break;
            else if (a[j]-a[i] == d){
                FOR(k,j+1,n){
                if(a[j]-a[i] == a[k]-a[j]) cnt++;
                else if (a[k]-a[j]>a[j]-a[i]) break;
                }
            }
        }
    }
    cout << cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
     while(t--)
        solve();
}
