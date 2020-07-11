#include <bits/stdc++.h>
#define ii pair<int, int>

using namespace std;

const int maxn = 1e4+10;
const int inf = 1e9+7;

vector<ii> graph[maxn];//peso da aresta até o nó de conexão X nó de conexão

vector<int> dijkstra(int src, int n){//src é o nó inicial
    vector<int> dist(n, inf);
    priority_queue<ii, vector<ii>, greater<ii>> pq; //distancia até agora X nó

    dist[src] = 0;
    pq.emplace(0, src);

    while (!pq.empty()){
        int u = pq.top().second, d = pq.top().first;
        pq.pop();

        if(d > dist[u]) continue;

        for(auto edge : graph[u]){
            int weight = edge.first;
            int node = edge.second;

            if(dist[node] > dist[u] + weight){
                dist[node] = dist[u] + weight;
                pq.emplace(dist[node], node);
            }
        }
    }
    return dist;

}

int main(void){



    return 0;
}