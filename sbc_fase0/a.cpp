#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b; cin >> a >> b;
    if (a==1) cout << "vivo e morto" << endl;
    else {
        if (b==1) cout << "vivo" << endl;
        else cout << "morto" << endl;
    }
    return 0;
}
/*
a,b = map(int,input().split())
if a == 1:
    print('vivo e morto')
else:
    if b==1:
        print('vivo')
    else:
        print('morto')
*/