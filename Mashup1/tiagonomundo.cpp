#include <bits/stdc++.h>
 
using namespace std;
 
int main()  {
    int n;
    cin >> n;
    while(n--){
        long long int a,b;
        cin >> a >> b;
        if(a-b != 1){
             cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
 
    return 0;
}