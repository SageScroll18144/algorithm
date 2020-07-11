#include <bits/stdc++.h>
#define pii pair<int, pair<int, int>>
using namespace std;

const int inf = 1e9+7;

vector<pii> edges;

vector<int> bellman_ford(int src, int n){
    vector<int> dist(n, inf);    
    dist[src] = 0;
    sort(edges.begin(), edges.end());
    for (int i = 0; i < n; i++){
        for (auto edge : edges){
            int w = edge.first;
            int u = edge.second.first;
            int v = edge.second.second;

            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
            }
        }
        
    }
    return dist;
    

}

int main(void){

    int n, m;
    cin>>n>>m;
    int ini, fim;
    cin>>ini>>fim;
    while(m--){
        int u, v, p;
        cin>>u>>v>>p;
        edges.push_back(make_pair(p, make_pair(u, v)));
    }
    vector<int> ans = bellman_ford(ini, n);

    cout<<ans[fim]<<endl;

    return 0;
}
