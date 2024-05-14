#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ordem_1;
    vector<int> ordem_2;
    while(n--){
        int a, b, c, d, aux = 0;
        cin >> a >> b >> c >> d;

        int max_1 = max(a, b);
        int min_1 = min(a,b);
        int max_2 = max(c, d);
        int min_2 = min(c, d);

        for(int i = min_1 + 1; i < max_1; i++){
            ordem_1.push_back(i);
        }

        for(int j = max_2; j >  min_2; j-- ){
            ordem_2.push_back(j);
        }

        for(int i = 0; i < ordem_1.size(); i++){
            for(int j = 0; j < ordem_2.size(); j++){
                if(ordem_1[i] == ordem_2[j]){
                    aux++;
                }
            }
        }

        if(aux !=  0){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }

        aux = 0;
        ordem_1.clear();
        ordem_2.clear();
    }

    return 0;
}