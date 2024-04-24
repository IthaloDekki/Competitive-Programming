#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int qtd ,g, f, c, aux = 0; 

    scanf("%lld %lld %lld %lld", &qtd, &g, &f, &c);

    if(g == f){
        aux = aux + g;
    }else{
        aux += (g < f) ? g : f;
    }
    if(c > 0){
        aux += c;
    }

    if(aux > qtd){
        printf("%lld", qtd);
    }else{
        printf("%lld", aux);
    }
    return 0;
}