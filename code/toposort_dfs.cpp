#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

vector<int> graph[maxn];

bool mark[maxn];
vector<int> ordem;

int n, m;

void dfs(int u){
    mark[u] = true;
    for(auto v : graph[u]){
        if(!mark[v]){
            dfs(v);
        }
    }
    ordem.push_back(u);

}

int main(){

    cin>>n>>m;
    while(m--){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
    }

    dfs(0);

    reverse(ordem.begin(), ordem.end());

    return 0;
}