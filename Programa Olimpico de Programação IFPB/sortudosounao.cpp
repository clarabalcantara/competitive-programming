#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    int esquerda = 0, direita = 0, soma = 0; bool ok = false;
    vector<int> l(n);
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    while (direita < n) {
        soma += l[direita];
        direita++;
        while (soma > x && esquerda < direita) {
            soma -= l[esquerda];
            esquerda++;
        }
        if (soma == x) {
            ok = true;
            break;
        }
    }
    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
