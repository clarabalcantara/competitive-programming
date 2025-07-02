#include <bits/stdc++.h>
using namespace std;

int main() {
    int linhas, colunas; cin >> linhas >> colunas;
    vector<string> matriz(linhas); 

    for (int i = 0; i < linhas; i++) {
        cin >> matriz[i];
    }
    for (int j = 0; j < colunas; j++) {
        for (int i = 0; i < linhas; i++) {
            cout << matriz[i][j];
        }
        cout << '\n';
    }
    return 0;
}


