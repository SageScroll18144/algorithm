#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

vector<int> path;//nosso caminho invertido
vector<int> graph[maxn];
map<pair<int, int>, bool> mark;

void search_path(int u){
    for(auto v : graph[u]){
        if(!mark[make_pair(u, v)]){
            mark[make_pair(u, v)] = true;
            mark[make_pair(v, u)] = true;

            search_path(v);
        }
    }
    path.push_back(u);
}

void get_path(){
    reverse(path.begin(), path.end());
}

int main(){
    

    return 0;
}