#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b); // recursiva ok -> n max = 100
}
long long mmc(long long a, long long b) {
    return a / mdc(a, b)*b;
}
long long mmcVetor(const vector<int>& v) {
    long long resultado = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        resultado = mmc(resultado, v[i]);
    }
    return resultado;
}

int main() {
    int n;
    cin >> n;

    set<long long> dias; // praticar mais uso do set
    for (int i = 0; i < n; ++i) {
        int c; cin >> c;
        vector<int> periodos(c);
        for (int j = 0; j < c; j++) {
            cin >> periodos[j];
        }
        long long dia = mmcVetor(periodos);
        dias.insert(dia); // sem repetir
    }
    for (long long d : dias) {
        cout << d << endl;
    }

    return 0;
}
