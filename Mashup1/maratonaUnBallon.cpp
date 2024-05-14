#include <bits/stdc++.h>
#include <algorithm> // std::find

using namespace std;

int main(){

    int n;
    cin >> n;
    while (n--){
        int t, aux, aus;
        cin >> t;
        string word;
        vector<int> c(26);
        cin >> word;
        aux = 0;
        aus = 0;

        for(int i = 0; i < t; i++){
            int num = (word[i] - '0') - 17;
            if(c[num] != 1){
                c[num] = 1;
                aux += 1;
            }

        }
        aus = t+aux;

        cout << aus << endl;

        // for (char x : word){

        //     auto it = find(c.begin(), c.end(), x);
        //     c.push_back(x);

        //     if (it - c.begin() >=  c.size() -1){
        //         aux+=2;
        //     }else{
        //         aux++;
        //     }
        // }

        // cout << aux << '\n';
        // aux = 0;
        // c.clear();
    }

    return 0;
}


