#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, aux, aus = 0;
    char temp;
    cin >> n;
    string word;

    vector<string> palavras;
    while(n--){
        cin >> word;
        for(int i = 1; i < word.length(); i++){
            if(int(word[i] -  '0') != int(word[0] - '0')){
                aus+=1;
                temp = word[i];
                word[i] = word[i-1];
                word[i-1] = temp;
                break;
            }
        }
        if(word.length() == 1){
            cout <<  "No"<< '\n';
        }
        else if(aus == 0){
            cout << "No" << '\n';
        }else{
            cout << "Yes" << '\n';
            cout << word << '\n';
        }
        aus =0;
    }

    return 0;
}