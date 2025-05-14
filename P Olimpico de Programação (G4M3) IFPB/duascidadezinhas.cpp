#include <bits/stdc++.h>
using namespace std;
int menor_diferenca = 100000;

int total = 0;

void bs(vector<int>& alimentos, int indice, int somaA){
    if (indice > alimentos.size()) return;

    int somaB = total - somaA;
    int diff = abs(somaA - somaB); // calculo de difrença absoluto (como se fosse um |modulo|)
    menor_diferenca = min(menor_diferenca, diff);

    if (indice < alimentos.size())
        bs(alimentos, indice + 1, somaA + alimentos[indice]);
}

int main() {
    int n, t;
    cin >> n >> t;
   // n: número de vagões do trem 
   // t: soma total dos alimentos
    vector<int> alimentos(n);
    for (int i = 0; i < n; ++i) {
        cin >> alimentos[i]; // lista de alimentos
        total += alimentos[i];
    }
    bs(alimentos, 0, 0); // começa com índice 0 e soma 0
    cout << menor_diferenca << endl;

    return 0;
}
