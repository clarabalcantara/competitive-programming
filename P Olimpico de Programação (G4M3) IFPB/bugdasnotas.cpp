#include <bits/stdc++.h>
using namespace std;
    int main(){
        vector<int> notas;
        vector<int> somas;
        for (int i = 0; i < 30; i++){
            int nota; cin >> nota;
            notas.push_back(nota);
        }
        for (int i = 0; i < 10; i++){
            int soma = 0;
            soma = notas[i] + notas[i+10] + notas[i+20];
            somas.push_back(soma);
        }
        for (int x: somas){
            cout << x << " ";
        }
        return 0;
    }