#include <bits/stdc++.h>
using namespace std;
    int main(){
        // questao string e condicional 
        string s; cin >> s;
        int n = s.size();
        string a = "";
        string b = "";
        for (int i = 0; i < n ; i++){
            if (i%2 == 0){
                a += s[i];
            } else {
                b += s[i];
            }
        }
        cout << a << endl;
        cout << b << endl;
        return 0;
    }