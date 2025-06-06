#include <bits/stdc++.h>
using namespace std;

int bs(int inicio, int fim, int valor){
  float meio = ceil((fim + inicio)/2);
  if(meio * meio == valor) return meio;
  else if ((meio == inicio) || (meio == fim)) return -1;
  else if (meio * meio > valor) return bs(inicio, meio, valor);
  return bs(meio, fim, valor);
}
int main() {
    int n; cin >> n;
    if (bs(1, n, n) == -1) cout << "NAO";
    else cout << "SIM";
    return 0;
}