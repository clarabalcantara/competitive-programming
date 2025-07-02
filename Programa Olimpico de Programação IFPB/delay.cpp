#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n; cin >> t >> n;

    while (t--) { // evito usar, mas atentar usarmais
        vector<int> delay(n);
        for (int i = 0; i < n; ++i) {
            cin >> delay[i];
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            int dieferenca = delay[i] - delay[0];
            if (dieferenca >= 0 && dieferenca <= 2) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
