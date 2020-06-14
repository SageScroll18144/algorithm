#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

int ds[maxn];
int sz[maxn];

void dsBuild(){
    for(int i = 0; i < maxn; i++){
        ds[i] = i;
        sz[i] = 1;
    }
}

int dsFind(int a){
    if(ds[a] != a) ds[a] = dsFind(a);
    return ds[a];
}
void dsUnion(int a, int b){
    a = dsFind(a);
    b = dsFind(b);
    if(a < b) swap(a, b);
    if(a != b) sz[a]+=sz[b];

    ds[b] = a;
}

int main(void){


    return 0;
}