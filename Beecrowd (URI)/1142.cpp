#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int linha; int n = 0;
  cin >> linha;
    for (int i = 0; i < linha; i++){
      cout << (n+1) << " " << (n+2)<< " " << (n+3)<< " " << "PUM\n";
      n += 4;
    }
    return 0;
}
