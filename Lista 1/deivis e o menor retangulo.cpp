#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m, aux=0;
    cin >> n >> m;
    string variavel;
    vector<int> is;
    vector<int> js;
    for(int i = 0; i < n ; i++){
        cin >> variavel;
        for(int j = 0; j < variavel.length(); j++){
            if(variavel[j] == '1'){
                is.push_back(i+1);
                js.push_back(j+1);

            }else if(variavel[j] == '0'){
                aux++;
            }
        }
    }
    sort(is.begin(), is.end());
    sort(js.begin(), js.end());

    if(aux == m*n){
        cout << "0x0";
    }else{
        cout << js.back() - js[0] + 1<< 'x' << is.back() - is[0] + 1; //area
    }

    return 0;
    
}