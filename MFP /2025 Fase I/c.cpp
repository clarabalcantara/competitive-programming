#include <bits/stdc++.h>
// nao precisa ser matriz
using namespace std;
    int main(){
        // vector<vector<int>> linha (3);
        // questao com condicional
        int n; cin >> n;
        int a, b, c;
        for (int i = 0; i < n; i++){
            cin >> a >> b >> c; // linha fixa de tres valores -> pensava q era matriz
            if (a == b) cout << c << "\n"; 
            else if (a == c) cout << b << "\n";
            else cout << a << "\n";
        }

        return 0;
    }