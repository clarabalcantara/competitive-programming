#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M; 

    string matriz[N];

    for (int i = 0; i < N; i++) {
        cin >> matriz[i];
    }
    
    string nova[M][N];
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            nova[i][j] = matriz[j][i];
            
        }
    }
    for (int i = 0; i < M ; i++) {
        for (int j = 0; j < N ; j++){
            cout << nova[i][j];
        }
    cout << endl;
    }

    return 0;

}