#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e8+7;

int a[maxn];

int n, busca;

int busca_binaria(int esq, int dir, int elemento){

    int mid = (esq + dir) / 2;
    
    if(a[mid] == elemento) return mid;
    if(a[mid] > elemento) return busca_binaria(esq, dir-1, elemento);
    if(a[mid] < elemento) return busca_binaria(esq+1, dir, elemento);

}

int main(void){

    cin>>n;

    for (int i = 0; i < n; i++) cin>>a[i];

    cin>>busca;

    cout<<busca_binaria(0, n-1, busca)<<'\n';

    return 0;
}