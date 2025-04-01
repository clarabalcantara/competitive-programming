#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nivel = 0;
    vector<char> vogal = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    vector<char> consoante = {'b', 'B', 'c', 'C', 'd', 'D', 'f', 'F', 'g', 'G', 'h', 'H', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};
    string nome; getline(cin, nome);  // ->getline pega o nome completo, incluindo espaços

    for (char c : nome) {
        if (find(vogal.begin(), vogal.end(), c) != vogal.end()) 
            nivel += 2;
        else if (find(consoante.begin(), consoante.end(), c) != consoante.end()) 
            nivel += 1;
    }

    cout << nivel << endl;
    return 0;
}
