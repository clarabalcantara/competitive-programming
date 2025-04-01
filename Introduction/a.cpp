#include <bits/stdc++.h>
using namespace std;
// deu errado um coisa mas fiquei sem tempo p verificar agr to so salvando
int main() {
  int soma = 0;
  int n; cin >> n;
  for (int i = 1; i> (n/2)+1; i++){
    if (n%i == 0){
      soma +=1;
    }
  }
  if (soma>n){
    cout << "SIM";
  } else if (soma<=n) {
    cout << "NAO";
  }
    return 0;
}
