#include <bits/stdc++.h>
using namespace std;
// 6 3
// 10 7 6 4 10 10
// XOR (^)
// 10 ^ 7 = 13
// 1010  ^  0111

// 1010
// 0111
// -----
// 1101 => 13
// operação inversa do xor == o proprio xor
// se dois bits forem iguais = 0
// se dois bits forem diferentes = 1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int esquerda = 0;
    int direita = m - 1;

    int xorIntervalo = 0;
    for (int i = esquerda; i <= direita; i++) {
        xorIntervalo ^= x[i];
    }

    int maiorXor = xorIntervalo;

    while (direita < n - 1) {
        xorIntervalo ^= x[esquerda]; // remove x[esquerda]
        esquerda++;
        direita++;
        xorIntervalo ^= x[direita];  // adiciona x[direita]

        if (xorIntervalo > maiorXor) {
            maiorXor = xorIntervalo;
        }
    }

    cout << maiorXor << endl;

    return 0;
}


