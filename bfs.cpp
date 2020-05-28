#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

vector<int> graph[maxn];

bool visited[maxn];

void bfs(int s){
    
    queue<int> fila;
    fila.push(s);
    visited[s] = true;

    while (!fila.empty())
    {
        int u = fila.front();
        fila.pop();
        for (auto v : graph[u])
        {
            if(!visited[v]){
                fila.push(v);
                visited[v] = true;
            }
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
    
    bfs(1);//primeiro nó pai

    return 0;
}