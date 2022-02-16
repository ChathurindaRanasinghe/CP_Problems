/*-------------------------------
	Author : Chathurinda Ranasinghe
	Date   : 2/12/2022 2:24:04 PM
---------------------------------*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve(){
	int n; cin >>n;
	int k; cin>>k;
	string s; cin >> s;
	vector<int> a(n/2,0);
	int cnt = 0;
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-1-i]){ 
			a[i] = 1;
			cnt++;
		}
	}
	
	if(k<cnt){
		cout << -1;return;
	}
	vector<bool> edited(n/2,false);
	
	for(int i=0;i<n/2;i++){
		if(a[i] == 1){
			k--;
			int temp = max(int(s[i]-'0'),int(s[n-i-1]-'0'));
			s[i] = s[n-i-1] = char(int('0'+temp) );
			edited[i] = true;
		}
	}
	
	for(int i=0;i<n/2;i++){
		if(k>0 && s[i] != '9' && i + 1 != n/2){
			if(edited[i] == true){
				k--;
				s[i] = s[n-i-1] = '9';
			}
			else{
				if(k>1){
					k-=2;
					s[i] = s[n-i-1] = '9';
				}
			}
			
		}
		
		if(i + 1 == n/2 && k>0 && s[i] != '9') s[i] = '9';
	}
	
	cout << s << endl;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt = 1;
    //cin >> tt;

    while(tt--) solve();
}