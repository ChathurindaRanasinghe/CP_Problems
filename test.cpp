#include <bits/stdc++.h>
using namespace std;


long long compute_hash(string s) {
    reverse(s.begin(),s.end());
    const int p = 131;
    const int m = 1e9 + 7;
    long long hash_value = 0;
    long long p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

int main(){
    int  a = 65*65;
    int d = 16;
    int p = log(a/4)/log(16);
    cout << p;

}