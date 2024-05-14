#include <bits/stdc++.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, p, a, aux=0,  aus;
    double f;
    double index = 0.0;

    cin >> n;
    cin >> f; 
    cin >> p;
    queue<int> fila;
    for(int i = 0; i < n; i++){
        cin >> a;
        fila.push(a);
    }

    

    while(!fila.empty()){
        double variavel = fmod(index, f);
        
        aus = fila.front();
        fila.pop();
        if(variavel == 0){
            if(aus <= p){
                aux+=5;
            }else{
                aux+=10;
                fila.push(aus - 2);

            }
        }else{
            aux+=1;
        }
        variavel = 0.0;
        index++;
    }

    cout << aux;


    return 0;
}