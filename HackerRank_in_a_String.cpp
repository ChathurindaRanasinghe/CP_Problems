/*-------------------------------
	Author : Chathurinda Ranasinghe
	Date   : 2/14/2022 8:05:55 AM
---------------------------------*/

#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " = " << x << "\n";

void solve(){
	string s; cin >> s;
	string a = "hackerrank";
	int k= 0;
	for(int i=0;i<s.length();i++){
		if(s[i] == a[k])k++;
		//deb(k);
		if(k==9){
			cout << "YES\n";return;
		}
	}
	cout << "NO\n";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt = 1;
    cin >> tt;

    while(tt--) solve();
}