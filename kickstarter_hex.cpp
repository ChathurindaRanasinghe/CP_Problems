/*-------------------------------
	Author : Chathurinda Ranasinghe
	Date   : 2/15/2022 6:19:33 PM
---------------------------------*/

#include <bits/stdc++.h>
using namespace std;

void solve(int t){
	int n; cin >> n;
	vector<string> b(n);
	
	for(int i=0;i<n;i++) cin >> b[i];
		
	int bcnt,rcnt,dcnt;
	dcnt = bcnt = rcnt = 0;
	
	bool bwins = false;
	bool rwins = false;
	
	bool state = false;
	
	for(int i=0;i<n;i++){
		
		bool bflag = true;
		bool rflag = true;
		
		for(int j=0;j<n;j++){
			if(b[i][j] != 'B') bflag = false;
			if(b[j][i] != 'R') rflag = false;
			
			if(b[i][j] == 'R') rcnt++;
			if(b[i][j] == 'B') bcnt++;
			if(b[i][j] == '.') dcnt++;
		}
		
		if(bflag == true && bwins == false) bwins = true;
		else if(bflag == true && bwins == true) state = true;
		
		if(rflag == true && rwins == false) rwins = true;
		else if(rflag == true && rwins == true) state = true;
		
	}
	
	//cout << bcnt << " "<< rcnt << "\n";
	
	cout << "Case #" << t << ": ";
	if(abs(bcnt - rcnt) > 1 || state == true){
		cout<< "Impossible\n";
	}
	else if(bwins == true && rwins == false){
		if(bcnt >= rcnt)
			cout << "Blue wins\n";
		else
			cout<< "Impossible\n";
	}
	else if(bwins == false && rwins == true){
		if(rcnt >= bcnt)
			cout << "Red wins\n";
		else
			cout<< "Impossible\n";
	}else{
		if(dcnt == 0)
			cout<< "Impossible\n";
		else
			cout << "Nobody wins\n";
	} 
	
	
	
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tt = 1;
    cin >> tt;

    for(int i=1;i<=tt;i++) solve(i);
}