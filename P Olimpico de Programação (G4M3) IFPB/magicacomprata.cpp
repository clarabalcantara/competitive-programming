#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 200005; // criação de vetor estatico um pouco maior que o n maximo
int ns[MAX], pointer_left, pointer_right, soma = 0; 
int qtd_pilhasEspalhadas, qtd_pilhasEscolhidas;
 
void add() {
  ++pointer_right;
  if(pointer_right < qtd_pilhasEspalhadas) {
    soma += ns[pointer_right];
  }
}
mfvoid rem() {
  soma -= ns[pointer_left];
  ++pointer_left;
 
  if(pointer_left > pointer_right) {
    add();
  }
}
 
int main() {
  cin>>qtd_pilhasEspalhadas>>qtd_pilhasEscolhidas;
  for(int i = 0; i < qtd_pilhasEspalhadas; ++i) {
    cin>>ns[i];
  }
  pointer_left = 0, pointer_right = -1;
  long long ans = 0;
  while(pointer_right < qtd_pilhasEspalhadas) {
    if(soma == qtd_pilhasEscolhidas) {
      ++ans;
    }
 
    if(soma <= qtd_pilhasEscolhidas) {
      add();
    } else {
      rem();
    }
  }
  cout<<ans<<'\n';
}
 