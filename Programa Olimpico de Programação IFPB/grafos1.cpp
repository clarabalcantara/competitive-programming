#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n + 1); // n uso indice 0S

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[j] % a[i] == 0) {
                cout << i << " " << j << "\n";
            }
        }
    }
    return 0;
}

