#include <bits/stdc++.h>

using namespace std;

const int maxn = 110;
const int inf = 1e9+7;

int dist[maxn][maxn];//Distância entre um par de vértices

int n, m;

//1-based
void floyd_warshall(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) dist[i][j] = 0;
            else dist[i][j] = inf;
        }
    }
    while (m--){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);

        dist[i][j] = w;
        dist[j][i] = w;
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }

}

int main(void){
    scanf("%d%d", &n, &m);
    floyd_warshall();
    return 0;
}