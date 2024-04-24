#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string nome;
    cin >> n;
    vector<pair<string, int>> v;
    vector<string> ordem;
    vector<int> result(n);
    for(int i=0; i < n ; i++){
        cin >> nome;
        v.push_back(make_pair(nome, i));
        
    }

    sort(v.rbegin(), v.rend());
    
    for(int i = 0; i < v.size(); i++){
        for(int j=0; j< v.size();j++){
            if(ordem[i] == v[j].first){
                cout << j << " ";
            }
        }
    }

    return 0;
}