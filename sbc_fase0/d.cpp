#include <bits/stdc++.h>
using namespace std;

// garantido que no min. 1 qubit esteja em superposicao com o estado isolado
// todo qubit que nao esta em superposicao com o estado isolado ta igual ao da conicao normal 
//'*' significa qubit em superposicao
// razão entre a quantidade de qubits que colapsaram em condições normais de temperatura e pressão e a quantidade de qubits que estavam em superposição no estado isolado
// dqtd = decimal com 2 casas
int main(){
    int n; cin >> n; // teste 1:  10
    string estado_isolado; cin >> estado_isolado; // teste 1: 0*1**100*1
    string condicoes_normais; cin >> condicoes_normais; // teste 1: 0110*100*1
    int qtd_colapsos_normais = 0, qtd_superposicoes_isolados = 0;
    for (int i = 0; i < n; i++){
        if (condicoes_normais[i] != estado_isolado[i]) qtd_colapsos_normais++;
        if (estado_isolado[i] == '*') qtd_superposicoes_isolados++;

    }
    float dqtd = float(qtd_colapsos_normais)/qtd_superposicoes_isolados;
    cout << fixed << setprecision(2) << dqtd << endl; // reforçar uso disso
    return 0;
}