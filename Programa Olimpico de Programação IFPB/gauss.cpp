#include <bits/stdc++.h>
using namespace std;
// na ultima maratona pop ---- n consegui fazer essa 
int zerosEsquerda(const vector<int>& linha) {
    int i = 0;
    while (i < linha.size() && linha[i] == 0) i++;
    return i;
}

vector<vector<int>> lerMatriz(int N) {
    vector<vector<int>> m(N, vector<int>(N));
    for (auto& linha : m)
        for (int& x : linha) cin >> x;
    return m;
}

void imprimir(const vector<vector<int>>& m) {
    for (auto& linha : m)
        for (int i = 0; i < linha.size(); i++)
            cout << linha[i] << (i == linha.size() - 1 ? '\n' : ' ');
}
// estimular uso do auto, funcoes e operador ternario* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
int main() {
    int N; cin >> N;
    auto matriz = lerMatriz(N); // p n ter que escrever vector<vector<int>>
    // !!!!!!!! pesquisei algo para 'otimizar' esse trecho do codigo e funcao anonima me foi recomendada, procurar mais sobre
    sort(matriz.begin(), matriz.end(), [](auto& a, auto& b) { // <- função anônima chamada de lambda
    // '[]': captura e serve para permitir que a lambda use variáveis de fora
        return zerosEsquerda(a) > zerosEsquerda(b);
    });

    imprimir(matriz);
    return 0;
}
