#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x; 
    cin >> n;
    char c;
    stack<int> pilha;
    multiset<int, greater<int> > gquiz1;
    multiset<int, greater<int> >::iterator itr;

    for(int i = 0; i < n; i++){
        cin >> c >> x;
        if(c == 'A'){
            gquiz1.insert(x);
            pilha.push(x);
        }else if (c == 'V'){
            if(pilha.empty()){
                cout << "0" << '\n';
            }else{
                itr = gquiz1.begin();
                cout << *itr << '\n';
            }
        }else{
            if(pilha.empty()){
                continue;
            }else{
                gquiz1.erase(pilha.top());
                pilha.pop();
            }
        }
    }



    return 0;
}