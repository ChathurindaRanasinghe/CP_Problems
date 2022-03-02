#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("output.txt","w",stdout);
	vector<int> permuatation;
	int n =10;
	for(int i=1;i<=n;i++) permuatation.push_back(i);

	do{
		
		int a = abs(permuatation[0]-permuatation[1]);
		for(int i=1;i<n-1;i++){
			a = a^abs(permuatation[i]-permuatation[i+1]);
		}
		if(a==0){
			for(int i=0;i<n;i++){
			cout << permuatation[i] << " ";
			}
			cout << endl;
		}


	}while(next_permutation(permuatation.begin(),permuatation.end()));
}

//1 2 3 4 5 8 6 7
//1 2 3 6 4 5 