#include <bits/stdc++.h>

using namespace std;

bool funcaoBOMBAAOREDOR (int x, int y, vector<vector<int>> bombas_coordernadas) {
    int tamanho = bombas_coordernadas.size();
    for (int i = 0; i < tamanho; ++i) {
        for (int j = 0; j < tamanho; ++j) {
            if () {

                return true;
            }
            

        }
        if ()
    }
    return 0;
}

int main() {
    int d, q; cin >> d >> q; vector<vector<int>> bombas_coordenadas(d);
    for (int i = 0; i < q; ++i) { // q = qtd de bomba 
        int x, y; cin >> x >> y; // coordenada
    if (funcaoBOMBAAOREDOR (x, y, bombas_coordenadas)) continue;
    else break;

        

    }
    return 0;
}


/* j
i  0   1   2   3   4
0  B   x   x   x   x
1  x   B   x   x   x
2  x   x   B   x   x
3  x   x   x   B   x
4  x   x   x   x   B 



AO REDOR
(i-1, j-1)    (i-1, j)    (i-1, j+i)
 (i, j-1)      (i,j)      (i, j+1)
(i+1, j-1)    (i+1, j)    (i+1, j+1)

(i, j)

vector = [[0, 0], [1, 1], [2, 2], [3, 3], [4, 4]]

funcaoBOMBAAOREDOR ()
    if 


CONDIÇÃO DE FALSO:
     ALGUMA DAS CORDENADAS DO VETOR DE VETORES ESTIVER AO REDOR DE OUTRA
*/