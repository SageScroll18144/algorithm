#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

int ds[maxn];

void dsBuild(){
    for (int i = 0; i < maxn; i++) ds[i] = i;
}

int dsFind(int a){
    if(ds[a]!=a) ds[a] = dsFind(ds[a]);
    return ds[a];
}

void dsUnion(int a, int b){
    a = dsFind(a);
    b = dsFind(b);
    if(a < b) swap(a, b);

    ds[b] = a;
}
int kruskal(vector<pair<int, pair<int, int>>>& edges){//edges -> < DISTANCIA de U para V>.
    dsBuild();
    sort(edges.begin(), edges.end());

    long long int totalWeight = 0;
    
    for(auto edge : edges){
        int weight = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;

        if(dsFind(u)!=dsFind(v)){
            dsUnion(u, v);
            totalWeight+=weight;

        }
    }
    return totalWeight;


}

int main(){

    return 0;
}