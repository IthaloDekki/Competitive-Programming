#include<bits/stdc++.h>
#include<bitset>
#define ll long long
using namespace std;

int main(){
    int t, n;
    string completo;
    string sub_string="";

    cin >> t;

    while(t--){
        cin >> n;
        cin >> completo;
        
        for(int i=0; i < n; i++){
            sub_string+= completo[n-1];
        }
        
        cout << sub_string << '\n';
        sub_string = "";
        

    }

    return 0;
}