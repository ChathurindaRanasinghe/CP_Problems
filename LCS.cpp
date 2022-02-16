/*-------------------------------
	Author : Chathurinda Ranasinghe
	Date   : 2/14/2022 8:39:52 AM
---------------------------------*/

#include <bits/stdc++.h>
#include <ostream>
using namespace std;

string s,ss;

int dp[10000][10000];


int LCS_length(const int& a, const int& b){
	if(a + 1 == s.length() || b + 1 == ss.length()) return 0;
	else if ( s[a] == ss[b]) return 1 + LCS_length(a+1,b+1);
	else return max(LCS_length(a+1,b),LCS_length(a,b+1));
	
}


// O(mn)
int LCS_dp(const int& i, const int& j){
	
	if(dp[i][j] < 0){
		if(i + 1 == s.length() || j + 1 == ss.length()) dp[i][j] = 0;
		else if ( s[i] == ss[j]) dp[i][j] = 1 + LCS_dp(i+1,j+1);
		else return dp[i][j] = max(LCS_dp(i+1,j),LCS_dp(i,j+1));
	}
	
	return dp[i][j];
}

string subseqeunce(){
	string ans = "";
	int i=0,j=0;
	while(i<s.length() && j < ss.length()){
		if(s[i] == ss[j]){
			ans += s[i];
			i++;j++;
		}
		else if(dp[i+1][j] >= dp[i][j]) i++;
		else j++;
	}
	
	
	return ans;
}


void solve(){
	cin >> s >> ss;
	memset(dp,-1,sizeof(dp));
	cout << LCS_dp(0,0) << endl;
	cout << subseqeunce();
	
	/*-----------------------------------------------------------------------
				Recursive Solution
				
	1. Find the shortest string.
	2. 
	
	
	
	-------------------------------------------------------------------------*/
	
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt = 1;
    //cin >> tt;

    while(tt--) solve();
}