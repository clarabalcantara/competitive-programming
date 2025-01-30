#include <bits/stdc++.h>

using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    int esperado = n1*n3;
    if (n2>=esperado){
       cout << "NAO";
    } else{
        cout << "SIM";
    }
    return 0;
}