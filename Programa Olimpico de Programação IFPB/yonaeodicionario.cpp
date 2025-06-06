#include <bits/stdc++.h>
using namespace std;


// com 'const &' -> passagem por referencia (usa o vetor original): mais seguro
int bs(vector<vector<string>>& dic, int inicio, int fim, string valor, int m) {
    if (inicio > fim) return -1;
    int meio = (inicio + fim) / 2;
    if (dic[meio][0] <= valor && dic[meio][m - 1] >= valor) return meio;
    else if (dic[meio][0] > valor) return bs(dic, inicio, meio - 1, valor, m);
    else return bs(dic, meio + 1, fim, valor, m);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<string>> dic(n, vector<string>(m)); // mais otimizado p n usar pushback() - pre alocando (MAS MESMA COMPLEXIDADE mas "custo de operação menor")

    for(int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j) {
            cin >> dic[i][j];
        }
    }

    int q; cin >> q;
    for(int _ = 0; _ < q; ++_){
        string s; cin >> s;
        int page = bs(dic, 0, n - 1, s, m);
        if (page != -1)
            cout << s << " " << (page + 1) << endl;
    }

    return 0;
}