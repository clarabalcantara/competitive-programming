#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int palitos = 0;
    for (int i = 1; i <= n;i++) {
        palitos += (3*i-1); 
    }
    cout << palitos << endl;
    return 0;
}
