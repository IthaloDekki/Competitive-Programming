#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string numero;


    while(n--){
        cin >> numero;
        int num1 = int(numero[0] - '0');
        int num2 = int(numero[1] - '0');
        int num3 = int(numero[2] - '0');
        int num4 = int(numero[3] - '0');
        int num5 = int(numero[4] - '0');
        int num6 = int(numero[5] - '0');

        if(num1 + num2 + num3 == num4 + num5 + num6){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}