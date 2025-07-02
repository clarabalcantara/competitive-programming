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
    int n; cin >> n;
    int inicio = n*n; int fim = (n+1)*(n+1);
    int cont = 0;
    for (int i = inicio; i <= fim; ++i)
        if (primo(i))
            cont++;

    cout << cont << endl;
    return 0;
}
