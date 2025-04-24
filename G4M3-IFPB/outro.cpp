
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> lista(n);
    for (int i = 0; i < n; ++i) {
        cin >> lista[i];
    }
    vector<int> prefix_max(n);
    prefix_max[0] = lista[0];
    for (int i = 1; i < n; ++i) {
        prefix_max[i] = max(prefix_max[i-1], lista[i]);
    }
    vector<int> suffix_max(n);
    suffix_max[n-1] = lista[n-1];
    for (int i = n-2; i >= 0; --i) {
        suffix_max[i] = max(suffix_max[i+1], lista[i]);
    }
        while (q--) { //enq q < 0 
            int i;
            cin >> i;
            i--; 
            int left = (i > 0) ? prefix_max[i-1] : 0;
            int right = (i < n-1) ? suffix_max[i+1] : 0;
            cout << left + right << '\n';
        }
    
    return 0;
}