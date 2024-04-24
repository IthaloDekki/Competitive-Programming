#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll int n, a, aux;
    scanf("%lld %lld", &n, &a);    
    aux = n % 500;

    (a >= aux) ? printf("Sim") : printf("Nao");
 
 
    return 0;
}