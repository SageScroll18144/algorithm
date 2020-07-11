#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

vector<int> graph[maxn];

bool visited[maxn];

void dfs(int u){
    visited[u] = true;
    for(auto node : graph[u]){
        if(!visited[node]){
            dfs(node);
        }
    }

}

int main(){

    int n, m;//nós e arestas
    cin>>n;
    cin>>m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);

        //bi-direcional
        graph[u].push_back(v);
        graph[v].push_back(u);

    }

    dfs(1);

    return 0;
}