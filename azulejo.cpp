#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll int n, m, aux =0;
    cin >> n >> m;
    
    ll int impares1 =  n - (n / 2);
    ll int impares2 = m - (m / 2);

    ll int pares1 = n / 2;
    ll int pares2 = m / 2;

    aux = (pares1 * pares2) + (impares1 * impares2);

    cout << aux;

    return 0;
}