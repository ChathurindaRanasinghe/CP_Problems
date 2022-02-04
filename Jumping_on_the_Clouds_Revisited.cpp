/*
Author : Chathurinda Ranasinghe
Date   : 2022-02-04
Time   : 21:29:47
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
    int n,k;cin >> n >> k;
    vi a(n);
    read(a,n);
    int e =100;
    for(int i=0;;){
        e-= (2*(a[i]==1) + 1);
        i = (i + k) % n;
        if (i == 0) break;
    }
    cout << e << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
     while(t--)
        solve();
}
