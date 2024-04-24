#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, c, aux =0, count = 0, in;

    cin >> n >> c;

    for(int i =0; i < n; i++){
        cin >> in; 
        if(in == 3 && 3 <= c){
            aux++;
            c-=3;
        }else{
            if(in > 3 && 3 <= c){
                count +=in - 3;
                aux++;
                c-=3;
                if(count >= 3 && 3 <= c){
                    count -= 3;
                    aux++;
                    c-=3;
                }
            }else if(in < 3 && 3 <= c){
                count += in;
                if(count >= 3 && 3 <= c){
                    count -= 3;
                    aux++;
                    c-=3;
                }
            }
        }
    }

    cout << aux;
    
    return 0;
}