#include<bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // int n, r, m, p, aux1, aux2;

    // cin >> n >> r;
    // cin >> m >> p;

    // aux1 = m * r;
    // aux2 = n * p;

    // if(aux1 > aux2){
    //     cout << "Promocao" << "\n";
    // }else{
    //     cout << "Enganacao" << "\n";
    // }

    double numerador = 10.5;
    double denominador = 3.0;

    // Usando fmod para obter o resto da divisão
    double resto = fmod(numerador, denominador);

    std::cout << "O resto da divisão de " << numerador << " por " << denominador << " é: " << resto << std::endl;

    return 0;
}