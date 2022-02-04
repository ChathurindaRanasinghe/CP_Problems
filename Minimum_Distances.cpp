/*
Author : Chathurinda Ranasinghe
Date   : 2022-02-04
Time   : 21:12:46
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


string s; ll n;



void solve(){
    int n;cin >> n;
    vi a(n);
    read(a,n);
    int ans = (int)1e6;
    FOR(i,0,n){
        FOR(j,i+1,n){
            ans = (a[i]==a[j] && abs(i-j) < ans? abs(i-j):ans);
        }
    }
    cout << (ans == (int)1e6? -1:ans);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
     while(t--)
        solve();
}
