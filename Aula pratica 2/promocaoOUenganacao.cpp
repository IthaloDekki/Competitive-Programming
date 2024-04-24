#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, r, m, p, aux1, aux2;

    cin >> n >> r;
    cin >> m >> p;

    aux1 = m * r;
    aux2 = n * p;

    if(aux1 > aux2){
        cout << "Promocao" << "\n";
    }else{
        cout << "Enganacao" << "\n";
    }

    return 0;
}