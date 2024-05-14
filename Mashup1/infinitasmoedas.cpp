#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, s, m,aux = 1;
    
    cin >> n >> s;
    m = n;
    if(n == 0 || n == s){
        aux = 0;
    }

    while(m < s){
        m+=n;
        aux++;
    }

    cout << aux;
    return 0;
}