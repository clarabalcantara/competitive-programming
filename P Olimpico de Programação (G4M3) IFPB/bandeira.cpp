#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    char c1 = '\0', c2 = '\0';
    int s1 = 0, s2 = 0;
    int esquerda = 0, direita = 0, maior = 0;
    while (direita < n) {
        if (c1 == '\0' || c1 == s[direita]) {
            s1++;
            c1 = s[direita];
        } else if (c2 == '\0' || c2 == s[direita]) {
            s2++;
            c2 = s[direita];
        } else {
            while (s1 > 0 && s2 > 0 && esquerda < direita) {
                if (s[esquerda] == c1) {
                    s1--;
                } else if (s[esquerda] == c2) {
                    s2--;
                }
                esquerda++;
            }
            if (s1 == 0) {
                c1 = s[direita];
                s1 = 1;
            } else {
                c2 = s[direita];
                s2 = 1;
            }
        }
        direita++;
        maior = max(maior, direita - esquerda);
    }
    cout << maior << endl;
    return 0;







    
}
