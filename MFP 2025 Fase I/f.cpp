#include <bits/stdc++.h>
using namespace std;
    int main(){
        // questao condicional
        int qtd_roda, pato_ganso, qtd_pato;
        cin >> qtd_roda; // qtd na roda n
        cin >> pato_ganso; // kid pato-ganso p
        cin >> qtd_pato; // qtd pato dito k
        // output - quem escuta ganso
        if (qtd_roda == 1) {
            cout << 1 << endl; // se so tive 1 kid ele msm esucta
            return 0;
        }
        if (qtd_roda == 2) {
            cout << (pato_ganso == 1 ? 2 : 1) << endl;
            // cmc na k1, o k2 == ganso 
            // cmc na k2, o k1 == ganso.
            return 0;
        }

        int resto_roda = qtd_roda-1;
        // pato_ganso + qtd_pato == posição final (ganso) MAS PODE IR ALEM DOS LIMITES DA RODA 
        int ganso = ((pato_ganso+qtd_pato)%resto_roda); // % p deixar nos i da roda
        // pula o pato_ganso ja foi usado mc ponto de partida

        if (ganso == 0) ganso = resto_roda;
        if (ganso >= pato_ganso) ganso+=1;
        // ultimo antes de qm cmc
        if (ganso > qtd_roda) ganso -= qtd_roda;
        cout << ganso << endl;

        return 0;
    }