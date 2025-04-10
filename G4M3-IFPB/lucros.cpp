#include <bits/stdc++.h>
using namespace std;
/*
4
1 2 3 4
OUT: 3
*/
int main()
{
    int n; cin >> n;
    vector<int> sequencia(n);
    for (int i = 0; i < n; i++) {
        cin >> sequencia[i];
    }
    int valor_min = sequencia[0];
    int lucro_max = 0;
    for (int i = 1; i < n; ++i) {
        int valor_atual = sequencia[i];
        int lucro_potencial = valor_atual - valor_min;
        
        if (lucro_potencial > lucro_max) {
            lucro_max = lucro_potencial;
        }
        
        if (valor_atual < valor_min) {
            valor_min = valor_atual;
        }
    }
    
    cout << (lucro_max > 0 ? lucro_max : 0) << endl;
    return 0;
}