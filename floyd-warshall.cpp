#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;
const int inf = 1e9+7;

int pesos[maxn][maxn];//Peso das arestas
int dist[maxn][maxn];//Distância entre um par de vértices

int n, m;

void floyd_warshall(){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            dist[i][j] = inf;
        }
        
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i == j) dist[i][j] = 0;
            else dist[i][j] = pesos[i][j];
        }
    }

    for (int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                dist[i][j] = min(dist[i][j], (dist[i][k] + dist[k][j]));
            }
        }
    }
    
    
} 


int main(void){

    memset(pesos, inf, sizeof pesos);
    cin>>n>>m;
    while (m--){
        int u, v, p;
        cin>>u>>v>>p;
        pesos[u][v] = p;
        pesos[v][u] = p; 
    }
    floyd_warshall();

    return 0;
}