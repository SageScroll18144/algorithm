#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e4+10;

vector<int> graph[maxn];
bool mark[maxn];
bool colors[maxn];

int n, m;

bool bicolorable(int u, bool color){
    mark[u] = true;
    colors[u] = color;
    for(auto v : graph[u]){
        if(!mark[u]){
            if(!bicolorable(v, !color)) return false;
        }else if(colors[u] == colors[v]) return false;
    }
    return true;

}

int main(void){

    cin>>n>>m;

    for (int i = 0; i < m; i++){
        int u, v;
        
        cin>>u>>v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    bool canIPaint = bicolorable(0, true);

    cout<<canIPaint<<endl;

    return 0;
}