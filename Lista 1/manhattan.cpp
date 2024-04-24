#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n, xa, ya, xi, yi,valor, distancia;
    cin >> n >> xa>> ya;
    vector<int> index;
    vector<vector<int>> restaurantes;
    vector<int> preco;
    
    while(n--){
        cin >> xi >> yi >> valor;
        restaurantes.push_back({xi, yi, valor});
    }

    for(int i=0; i < restaurantes.size(); i++){
        bool check = false;
        for(int j =0; j < restaurantes[i].size(); j++){
            distancia = abs(xa - restaurantes[i][0]) + abs(ya - restaurantes[i][1]);
            if(check == false){
                preco.push_back((distancia * 2) + restaurantes[i][2]);
                check = true;
            }
        }
    }

    auto menor = min_element(begin(preco), end(preco));
    int indexmenor = distance(begin(preco), menor);
    cout << *menor << " " << indexmenor+1;

    return 0;
}