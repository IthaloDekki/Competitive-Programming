#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, aux = 0, aus = 0;
    vector<int> ordem;;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        ordem.push_back(a);
    }

    int primeiro = ordem[0];
    bool condicao = false;

    for(int i = 1; i < ordem.size(); i++){
        if(ordem[i] > primeiro){
            cout << i + 1 << endl;
            condicao = true;
            break;
        }
    }

    if(condicao == false){
        cout << "-1" << endl;
    }


    return 0;
}