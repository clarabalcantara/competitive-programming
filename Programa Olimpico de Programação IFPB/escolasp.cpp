#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<vector<int>> mapa(N, vector<int>(N));
    
    for (int i = 0; i < N; ++i) for (int j = 0; j < N; ++j) cin >> mapa[i][j]; // inserção

    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            if (mapa[i][j] == 1 && mapa[i][j+1] == 1 && mapa[i+1][j] == 1 && mapa[i+1][j+1] == 1) { cout << "YES" << endl; return 0;} // quadrado; no primeiro quadrado achado ja termina o program
        }
    }

    cout << "NO" << endl;
    return 0;
}
