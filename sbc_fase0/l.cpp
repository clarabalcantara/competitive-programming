#include <bits/stdc++.h>
using namespace std;

// 1 mb = 10^6

int main(){
    long long m; cin >> m; m = m*1000000*8;  // formato de bits
    long long qubits = 0;
    long long pow = 1;
    while (true){
        if (pow >= m) break;
            pow *= 2;
            qubits++;
    }
    cout << qubits << endl;
    return 0;
}