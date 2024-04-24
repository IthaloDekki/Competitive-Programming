#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    scanf("%lld", &n);
    
    while((n%2) == 0){
        n = n/2;
    }

    printf("%lld", n);

    return 0;
}


#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    int s, a, b, c;
    int n = 0;
    int aux;

    scanf("%d %d %d", &a, &b, &c);
    
    for(int i = 1; i < 100; i++){
        s = abs(i - a) + pow(abs((i - b)), 2) + pow(abs((i - c)), 3);
        
        if(i == 1){
            n = s;
            aux = i;
        }else{
            if(s < n){
                aux = i;
                n = s;
            }
        }
    }

    printf("%d", aux);
    


    return 0;
}


#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int a, b, c, n, aux;

    scanf("%lld %lld %lld", &a, &b, &c);

    aux = __gcd(a, b);
    n =__gcd(aux, c);

    printf("%lld", n);

    return 0;
}

/*memset();*/
