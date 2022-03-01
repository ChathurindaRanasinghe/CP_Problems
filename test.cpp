#include <iostream>
using namespace std;

int main(){
	freopen("output.txt","w",stdout);
	for(int i=0;i<100000;i++){
		cout << i << " \tXOR\t " << i+1 << "\t = " <<( i^(i+1)) << endl;
	}
}