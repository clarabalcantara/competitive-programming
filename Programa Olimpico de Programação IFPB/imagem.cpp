#include <bits/stdc++.h>
using namespace std;

bool RGBouFFFFFF(const string& color) {
    return color == "FF0000" || color == "00FF00" || color == "0000FF" || color == "FFFFFF";
}

int main() {
    int X, Y;
    cin >> X >> Y;

    vector<vector<string>> imagem(X, vector<string>(Y)); // n sei se essa sintaxe ta 100% correta kk
    // condicao 1: se é vermelho, azul, verde ou branco  
    for (int i = 0; i < X; ++i) {
        for (int j = 0; j < Y; ++j) {
            cin >> imagem[i][j];
            if (!RGBouFFFFFF(imagem[i][j])) {
                cout << "N" << endl; 
                return 0;
            }
        }
    }
    // condicao 2: borda de 1 cor apenas
    set<string> borda;
    for (int i = 0; i < X; ++i) {
        borda.insert(imagem[i][0]);    
        borda.insert(imagem[i][Y - 1]);
    }
    for (int j = 0; j < Y; ++j) {
        borda.insert(imagem[0][j]);    
        borda.insert(imagem[X - 1][j]); 
    }
    if (borda.size() != 1) {
        cout << "N" << endl;
        return 0;
    }
    // condicao 3: cor da borfa nao ta na imagem em si
    string corBorda = *borda.begin();
    for (int i = 1; i < X - 1; ++i) {
        for (int j = 1; j < Y - 1; ++j) {
            if (imagem[i][j] == corBorda) {
                cout << "N" << endl;
                return 0;
            }
        }
    }
    cout << "S" << endl;
    return 0;
}
