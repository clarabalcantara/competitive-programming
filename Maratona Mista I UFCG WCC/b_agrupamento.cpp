#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2; cin>>n1>>n2;
    vector<int> v1 = {1, 3, 5, 7, 8, 10, 12}; vector<int> v2 = {4, 6, 9, 11}; vector<int> v3 = {2};
    bool agrupadoOuNem = false;
    // find busca n1 e n2 no intervalo de cada vetor (v.begin(), v.end())
    // se n achar o iterador vai retornar o valor do ultimo elemento do vector.
    // isso checamos no if por isso o != de v.end()
    // (NÃO EXISTE 'IN' EM C++) 
    if ((find(v1.begin(), v1.end(), n1) != v1.end()) && (find(v1.begin(), v1.end(), n2) != v1.end())) { agrupadoOuNem = true; }
    else if ((find(v2.begin(), v2.end(), n1) != v2.end()) && (find(v2.begin(), v2.end(), n2) != v2.end())) { agrupadoOuNem = true; }
    else if ((find(v3.begin(), v3.end(), n1) != v3.end()) && (find(v3.begin(), v3.end(), n2) != v3.end())) { agrupadoOuNem = true; }
    cout << (agrupadoOuNem ? "Yes" : "No") << endl;

    return 0;
}