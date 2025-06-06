#include <bits/stdc++.h>
using namespace std;
// n -> n de elementos
// m -> valor max
    int main(){
        // questao de prefixsum == quantidade entre pontos ou acumulo de freq
        // elem >= elem (direita -> esquerda) prefixsum normal faz de frente p tras esq-dir
        int n, m; cin >> n >> m;
        int c;
        vector<int> frequencia(m+2, 0);
        vector<int> b(m+2, 0);

        for (int i = 0; i < n; ++i){
            cin >> c; // p cada valor c, frequencia[c]++
            frequencia[c]++;
        }
        for (int j = m; j >= 1;--j){
            b[j] = b[j +1] + frequencia[j]; //p cada j, qts n >= j 
        }
        for (int j = 1; j <= m; ++j){
            cout << b[j];
            if (j < m) cout << " ";
        }
        cout << endl;

        return 0;
    }