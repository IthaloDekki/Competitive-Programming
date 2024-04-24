#include<bits/stdc++.h>

using namespace std;

int main(){
    double n,certo=0, errado=0;
    char x, y;
    cin >> n;

    for(int i=0; i< n; i++){
        cin >> x >> y;
        if(x != y){
            errado++;
        }else{
            certo++;
        }
    }

    double media = 10 *(certo/n);

    cout << "Nota: "<< fixed << setprecision(2) <<media ;

    return 0;
}