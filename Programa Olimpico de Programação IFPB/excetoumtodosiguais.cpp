#include <bits/stdc++.h>
using namespace std;

int main() {
    string palavra;
    cin >> palavra;
    int tamanho = palavra.size();
    int metade = tamanho/2;
    string palavra1 = palavra.substr(metade);    
    string palavra2 = palavra.substr(0, metade); // nosso slice
    reverse(palavra1.begin(), palavra1.end()); // dificil
    int cont = 0;
    for (int i = 0; i < metade; i++) {
        if (palavra1[i] != palavra2[i]) {
            cont++;
        }
    }
    if (cont == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
