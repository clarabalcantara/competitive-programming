#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x; cin >> x;
    // qual menor int positivo menor igual a x onde a sua > representação binaria < seja palindroma
    bitset<64> bx(x);
    string xstring = bx.to_string(); 
    reverse(xstring.begin(), xstring.end());
    string ystring;  
    for (int i = 1; i <= x; i++){
        bitset<64> by(i);
        ystring = by.to_string(); 
        if (xstring == ystring){
            cout << i << endl;
            return 0;
        }
    }
} // NÃO DEU CERTO - com bug