#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b, c, d, aux = 0;
    cin >> n;
    vector<int> v;

    while(n--){
        cin >> a >> b >> c >> d;

        if(a < b){
            aux++;
        }
        if(a < c){
            aux++;
        }
        if(a < d){
            aux++;
        }

        printf("%d \n", aux);
        aux = 0;
    }
}