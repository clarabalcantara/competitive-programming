#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // casos teste
    cin >> t;
    while (t--) {
        int n; // tamanho da string
        cin >> n;
        string str;
        cin >> str;
        bool y = false, e = false, s = false;
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'y') {
                y = true;
            } else if (str[i] == 'e' && y) {
                e = true;
            } else if (str[i] == 's' && y && e) {
                s = true;
            }
            if (y && e && s) {
                c++;
                y = e = s = false;
            }
        }
        cout << c << endl;
    }
    return 0;
}
