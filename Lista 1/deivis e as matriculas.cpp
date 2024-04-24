#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, aus;
    string nomes, aux;
    cin >> n;
    vector<string> v;
    vector<string> ordem;
    for(int i = 0; i < n; i++ ){
        cin >> nomes;
        ordem.push_back(nomes);
        v.push_back(nomes);
        
    }

    sort(v.begin(), v.end());
    

    for(int i = 0; i < ordem.size(); i++){
        aus = 0;
        for(int j = 0; j < v.size(); j++){
            if(ordem[i] == v[j]){
                cout << j << " ";
                break;
            }
        }
    }

    return 0;

}