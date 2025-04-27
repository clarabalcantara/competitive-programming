#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    int totalMeloes = 0;
    for (int i=0; i<n; i++){
      int meloes; cin >> meloes;
      if (1 <= meloes && meloes <= 9){
        totalMeloes += meloes;
      }
    }
    if (totalMeloes >= e){
      cout << "NADA PREOCUPANTE";
    } else if (totalMeloes>=(e-5)){
        cout << "POUCO PREOCUPANTE";
    } else {
        cout << "MUITO PREOCUPANTE";
    }
    return 0;
    }
