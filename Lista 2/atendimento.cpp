#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

int main(){

    int n, m, tempo = 0, t;
    cin >> n >> m;
    queue<pii> func; // id e tempo
    queue<pii> cli;
    for(int i = 0; i < n; i++){
        cin >> t;
        func.push({i+1, t});
    }
    for(int i = 0; i < m; i++){
        cin >> t;
        cli.push({i+1, t});
    }

    

    return 0;
}