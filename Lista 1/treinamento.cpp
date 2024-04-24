#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    int k;
    cin >> k;
    vector<int> v(k);
    

    for(int i=0; i< k; ++i){
        cin >> v[i];
    }
 
    sort(v.begin(), v.end());
    int dia = 1;
    auto it = v.begin();
    while(it != v.end()){
        it = lower_bound(it, v.end(), dia);
        if(it == v.end()){
            break;
        }

        dia++;
        it++;
    }

    cout << dia;

    return 0;

}