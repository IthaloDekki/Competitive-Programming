#include<bits/stdc++.h>

using namespace std;

int main(){
    bool stop = true;
    int atual;
    string numero_string;
    int a1, a2, a3, a4;
    cin >> atual;

    while(stop){
        atual++;
        numero_string = to_string(atual);
        a1 = int(numero_string[0] - '0');
        a2 = int(numero_string[1] - '0');
        a3 = int(numero_string[2] - '0');
        a4 = int(numero_string[3] - '0');

        if(a1 != a2 && a1 != a3 && a1 != a4 && a2 != a3 && a2 != a4 && a3 != a4){
            cout << numero_string << '\n';
            stop = false;
        }else{
            continue;
        }
    }

    return 0;
}