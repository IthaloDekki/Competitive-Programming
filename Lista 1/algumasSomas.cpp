#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, a, b, aux=0, primeiro, segundo, soma=0;
    string numero_string;
    numero_string = "";
 
    cin >> n >> a >> b;
      
    for(int i=1; i <= n; i++ ){
        numero_string = to_string(i);
        
        for(char x: numero_string){
            soma += x - '0';
        }
        
        if(soma >= a && soma <=b){
            aux+= stoi(numero_string);
        }
        soma = 0;
    }
 
    cout << aux << '\n';
    return 0;
 
}