#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    vector<int> notas(n);
    for (int i = 0; i < n; ++i) {
        cin >> notas[i];
    } sort(notas.begin(), notas.end());
    vector<int> corte(q);
    for (int i = 0; i < q; ++i) {
        cin >> corte[i];
    }
    for (int i = 0; i < q; ++i) {
        int c = corte[i];
        //thiago mencionou aula passada,
            //LOWER_BOUND: retorna o 1o elemento que >= que o valor mencionado
        auto pos = lower_bound(notas.begin(), notas.end(), c + 1); // c+1 (primeiro elem >c)
        int resultado = n - (pos - notas.begin()); // 'distancia' entre o elem 0 até o o elem >c (contagem)
        
        cout << c << " " << resultado << endl;
    }

    return 0;
}
