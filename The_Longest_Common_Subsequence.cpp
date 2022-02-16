/*-------------------------------
	Author : Chathurinda Ranasinghe
	Date   : 2/14/2022 1:02:31 PM
---------------------------------*/

#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[100],b[100];
int dp[100][100];


int LCS(int i,int j){
	if(dp[i][j] < 0){
		if(i+1 == n || j+1 == m) dp[i][j] = 0;
		else if(a[i] == b[j]) dp[i][j] = 1 + LCS(i+1,j+1);
		else dp[i][j] = max(LCS(i,j+1),LCS(i+1,j));
	}
	return dp[i][j];
}

void printSubsequence(){
	int i=0,j=0;
	while(i<n && j<m){
		if(a[i] == b[j]){
			cout << a[i] << " ";
			i++;j++;
		}
		else if(dp[i+1][j] >= dp[i][j+1]) i++;
		else j++;
	}
}




void solve(){
	cin >> n >> m;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int j=0;j<m;j++) cin >> b[j];
		
	memset(dp,-1,sizeof(dp));
	LCS(0,0);
	printSubsequence();
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt = 1;
    //cin >> tt;

    while(tt--) solve();
}

