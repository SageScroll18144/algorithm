#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e4+10;

vector<int> graph[maxn];
int graus_inp[maxn];
vector<int> ordem;

int n, m;

void toposort(){

    priority_queue<int, vector<int>, greater<int>> fila;
    
    for (int i = 1; i <= n; i++){
        if(graus_inp[i] == 0){
            fila.push(i);
        }        
    }

    while(!fila.empty()){
        int u = fila.top();
        fila.pop();

        ordem.push_back(u);

        for(auto v : graph[u]){
            graus_inp[v]--;
            if(graus_inp[v] == 0){
                fila.push(v);
            }
            
        }

    }


}

int main(void){

    cin>>n>>m;

    for (int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;

        graph[u].push_back(v);
        graus_inp[v]++;

    }
    toposort();

    return 0;
}