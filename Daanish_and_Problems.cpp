#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		int a[10];
		for(int i=0;i<10;i++) cin >> a[9-i];
		long long k;
		cin >> k;
		for(auto &i:a){
			if(k==0) break;
			if(k>=i){
				k -= i;
				i = 0;
			}
			else if(i>k){
				i-= k;
				k = 0;
			}
		}
		
		for(int i=0;i<10;i++){
			if(a[i]){
				cout << 10 - i << "\n";
				break;
			}
		}
		
		
	}
}