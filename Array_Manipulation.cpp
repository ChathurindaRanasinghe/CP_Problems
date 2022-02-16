/*
Author : Chathurinda Ranasinghe
Date   : 2022-02-12
Time   : 10:05:05
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
    int a,b,k,m;
    cin >> n >> m;
    vi arr(n+1,0);
    while(m--){
        cin >> a >> b >>k;
        arr[a] += k;
        arr[b+1] += -k;
    }
    long ans = 0;
    long sum = 0;
    FOR(i,0,n){
        sum += arr[i];
        ans = max(ans, sum);
    }
    cout << ans;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
     while(t--)
        solve();
}
