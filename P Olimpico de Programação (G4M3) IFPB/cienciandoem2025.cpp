#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    int esquerda = 0, direita = 0;
    vector<int> sum(3, 0); // sum [0, 0, 0]
    // cont  de cada tipo (1, 2, 3 → índices 0, 1, 2)
    int menor = n;
    while (direita < n) {
        sum[l[direita] - 1]++;
        direita++;
        if (esquerda < direita) {
            while (sum[l[esquerda] - 1] > 1) {
                sum[l[esquerda] - 1]--;
                esquerda++;
            }
        }
        if (sum[0] > 0 && sum[1] > 0 && sum[2] > 0) {
            menor = min(menor, direita - esquerda);
        }
    }
    cout << menor << endl;
    return 0;
}
