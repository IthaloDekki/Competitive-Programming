#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, num_vezes, caixa, aux = 0, soma;
    cin >> n;
    vector<ll int> v;

    while(n--){
        cin >> num_vezes;

        for(int i = 0; i < num_vezes; i++){
            cin >> caixa;
            v.push_back(caixa);
            aux += caixa;
        }
        
        sort(v.begin(), v.end());

        soma = aux - (v[0] * num_vezes);
        cout << soma << "\n";
        soma = 0;
        aux =0;
        v.clear();
        
    }

    return 0;
}