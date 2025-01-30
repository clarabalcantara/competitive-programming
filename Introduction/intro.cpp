// executando no terminal "g++ nomedoarquivo.cpp -o nomedoarquivo"
// rodar "./nomedoarquivo"

#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; // * -10ˆ9 a 10ˆ9
  long long l; // * -10ˆ18 a 10ˆ18
  float f; // -10ˆ9 a 10ˆ9, 9 casas contando com as decimais (não usar)
  double d; // * -10ˆ18 a 10ˆ18, 18 casas contando com as decimais
  char c; // * caractere, usa aspas simples
  string s; // * sequência de caracteres
  bool b; // * true ou false

  cin >> n >> l; // recebe a entrada -> n,l = map()
  cout << "esse aqui é o n: " << n << "\n"; // imprimindo o n -> print(f"esse aqui é o n: {n}")
  cout << "esse aqui é o l: "+l+"\n"; // imprimindo concatenando a string

  if(b){
    cout << "entrou no if\n";
    // > < == >= <= -> exatamente igual
    // != diferente
    // !b -> not b 
    // and ou &&
    // or ou ||
    // xor ou ˆ
  }else if(n < l){
    cout << "entrou no else if\n";
  }else{
    cout << "se não\n";
  }

  int a = 100, b = 30, c = 40;
  int soma = a + b + c; // mesma coisa
  int multiplicacao = a * b * c; // mesma coisa, cuidado com o limite da variável
  int subtracao = a - b - c; // mesma coisa
  double divisao = a / b; // divisao com casas decimais (resto)
  int resto = a % b; // mesma coisa
  
  int divisaoInteira1 = (a - (a%b)) / b; // divisao inteira
  int divisaoInteira2 = ceil(a / b); // arredonda pra cima
  int divisaoInteira3 = floor(a / b); // arredonda pra baixo

  int raiz = sqrt(a);
  
  return 0;
}