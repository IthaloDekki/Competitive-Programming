#include<bits/stdc++.h>

using namespace std;

typedef tuple<int, int, int, int, int> tii;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t, p, r, aux = 0, momento = 0;

    priority_queue<tii, vector<tii>, greater<tii>> atendimentos; // crescente

    cin >> n;
    for(int i=0; i < n; i++){
        cin >> t >> p >> r;
        atendimentos.push({momento, i+1,t, p, r}); // i +1 é o ID
    }

    while(!atendimentos.empty()){
        if(get<0>(atendimentos.top()) + get<3>(atendimentos.top()) >= aux){
            aux = max(aux, get<0>(atendimentos.top())) + get<2>(atendimentos.top());
            atendimentos.pop();
        }else{
            tii aux1 = make_tuple(get<0>(atendimentos.top()) + get<3>(atendimentos.top()) + get<4>(atendimentos.top()), get<1>(atendimentos.top()), get<2>(atendimentos.top()), get<3>(atendimentos.top()), get<4>(atendimentos.top()));
            atendimentos.pop();
            atendimentos.push(aux1);
        }
    }

    cout << aux;





    return 0;
}