#include <bits/stdc++.h>
using namespace std;

int main()
{
int dimensao; cin>>dimensao;
int quant; cin>>quant;
int x,y;
int cont = 0;
int matriz[dimensao][dimensao] = {0};
for (int i=0;i<quant; i++){
    cin>> x >> y;
    matriz[x][y] = 1;
};  

for (int i=0; i<dimensao; i++){
    for (int j=0; j<dimensao; j++){
        if(matriz[i][j] == 0){
            if (i == 0 or j == 0 or i == dimensao-1 or j == dimensao-1){
                continue;
            } else{
                if(matriz[i][j+1] == 1){
                cont +=1;
                };
                if(i == 0 or matriz[i][j-1] == 1){
                    cont +=1;
                };
                if(matriz[i+1][j] ==1){
                    cont +=1;
                };
                if(matriz[i+1][j-1] == 1){
                    cont +=1;
                };
                if(matriz[i+1][j+1] == 1){
                    cont +=1;
                };
                if(matriz[i-1][j-1] == 1){
                    cont +=1;
                };
                if(matriz[i-1][j] == 1){
                    cont +=1;
                };
                if(matriz[i-1][j+1] == 1){
                    cont +=1;
                };
            };
        };
    };
};
    
for (int i=0; i<dimensao; i++){
    for (int j=0; j<dimensao; j++){
        cout<< matriz[i][j] << " ";
    };
    cout<< endl;
};


if (cont >4){
    cout<< "False";
}
else{
    cout<< "True";
};

    return 0;
}