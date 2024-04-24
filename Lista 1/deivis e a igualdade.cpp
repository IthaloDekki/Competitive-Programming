#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
    ll int n;
    vector<ll int> v;
    scanf("%lld", &n);

    ll int aux;
    for(int i=0; i < n; i++){
        scanf(" %lld", &aux);
        v.push_back(aux);
    }

    sort(v.begin(), v.end(), greater<ll int>());
    ll int aus =0;
    for(ll int i = 1; i < v.size(); i++){
        aus += v[0] - v[i];
    }

    printf("%lld", aus);

    return 0;
}