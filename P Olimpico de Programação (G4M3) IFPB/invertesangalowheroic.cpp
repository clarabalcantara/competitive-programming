#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; vector<int> v(n); vector<int> inv(n + 1, 0); int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            inv[0]++; inv[i + 1]--;
        }
    }
    for (int i = 0; i < n; i++) {
        total += inv[i];
        if (total % 2 != 0) {
            v[i] *= -1;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
