#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;
const int maxl = 20;

int n;

vector<int> graph[maxn];
int nivel[maxn];
int tab[maxn][maxl];//salto

//init Build
void dfs(int u, int p){
    for(auto v : graph[u]){
        if(v==p) continue;

        nivel[v] = nivel[u] + 1;
        tab[v][0] = u;

        dfs(v, u);
    }
}
//ja iniciei o 0
void build(){
    for(int j=1;j<maxl;j++){
        for(int i=1;i<=n;i++){
            tab[i][j] = tab[tab[i][j-1]][j-1];
        }
    }
}
//End build

int lca(int u, int v){
    if(nivel[u] < nivel[v]) swap(u, v);

    //igualar os niveis
    for(int i=maxl-1;i>=0;i--){
        if(nivel[u]-(1<<i) >= nivel[v]){
            u = tab[u][i];
        }
    }

    if(u==v) return u;

    for(int i=maxl-1;i>=0;i--){
        if(tab[u][i]&&tab[v][i]&&tab[u][i]!=tab[v][i]){
            u = tab[u][i];
            v = tab[v][i];
        }
    }

    return tab[u][0];
}

int dist(int u, int v){
    return nivel[u] + nivel[v] - 2*nivel[lca(u, v)];
}

int main(){

    return 0;
}