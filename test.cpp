#include <bits/stdc++.h>
using namespace std;


int decibinToDec(int n){
    int i = 0;int ans = 0;
    while(n != 0){
        int a = n%10;
        n /= 10;
        ans += a * pow(2,i);
        i++;
    }
    return ans;
}

int main(){
    cout << decibinToDec(100);

}