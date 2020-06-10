#include <bits/stdc++.h>

using namespace std;

int a[] = {1,2,5, 10, 20};

int solve(int n){
    int qtd = 0;
    for (int i = sizeof(a)/sizeof(int) - 1; i >= 0; i--){
        int aux = (n / a[i]);
        n -= aux*a[i];
        qtd+=aux;
    }  

    return qtd;
}

int main(void){ 
    cout<<solve(26);


}