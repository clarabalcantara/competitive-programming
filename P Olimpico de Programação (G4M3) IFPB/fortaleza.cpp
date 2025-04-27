#include <bits/stdc++.h>
using namespace std;

int main() {
    int rep; cin >> rep;

    for (int i = 0; i < rep; i++) {
        int a, b, c; cin >> a >> b >> c;
        vector<int> linha;

        for (int j = a; j <= b; j += c) {
            linha.push_back(j);
        }
// variavel size_t -> tamanho da variavel
        for (size_t j = 0; j < linha.size(); j++) {
            if (j > 0) cout << " "; 
            cout << linha[j];
        }
        cout << endl; 
    }

    return 0;
}

