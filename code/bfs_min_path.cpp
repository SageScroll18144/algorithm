#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

vector<int> graph[maxn];
bool visited[maxn];
int dist[maxn];

int n, m;//nós e arestas

void bfs(int s){

    queue<int> fila;
    
    fila.push(s);
    visited[s] = true;

    while (!fila.empty())
    {
        int next_node = fila.front();
        fila.pop();

        for(auto v : graph[next_node]){
            if(!visited[v]){
                dist[v] = dist[next_node] + 1;
                fila.push(v);
                visited[v] = true;
            }
        }
    }
    

}

int main(void){

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        scanf("%d %d", &u, &v);

        graph[u].push_back(v);
        graph[v].push_back(u);
    }    

    bfs(1);

    cout<<dist[3]<<endl;

    return 0;
}