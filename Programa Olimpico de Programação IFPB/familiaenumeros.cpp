#include <bits/stdc++.h>
using namespace std;

bool primo(long long n){
    if (n<=3) return true; 
    if (n%2 == 0 || n%3 == 0) return false; int i=5;
    while (i*i <= n){ // a partir da raizq os pares se repetem
        if (n%i == 0 || n%(i+2) == 0) return false; // 6-1 || 6+1
        i+=6;
    }
    return true;
}
int main() {
    long long n; cin >> n;
    if (primo(n+1) && primo(n-1)) cout << n << " TIA"<< endl;
    else cout << n << " NAH" << endl;

    return 0;
}
