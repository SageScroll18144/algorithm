#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

vector<int> graph[maxn];

bool visited[maxn];
int comp[maxn];

void dfs(int u, int cc){

    visited[u] = true;
    comp[u] = cc;

    for(auto node : graph[u]){
        if(!visited[node]){
            dfs(node, cc);
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
    
    int cc = 0;

    for (int i = 1; i <= n; i++)
    {
        if(!visited[i]){
            dfs(i, ++cc);
        } 
    }
    printf("%d\n", (comp[1]==comp[3]));
    cout<<cc;

    return 0;
}