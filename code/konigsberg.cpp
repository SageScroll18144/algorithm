#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

int grau_entrada[maxn];
int grau_saida[maxn];

int n;

// O(n)
bool solve(){
    for(int i=1; i<=n; i++){
        if((grau_entrada[i]+grau_saida[i])&1) return false;
    }
    return true;
}

int main(){

    return 0;
}