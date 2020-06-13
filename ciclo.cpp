#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e4+10;

vector<int> graph[maxn];

int dfs(int son, int father, set<int>& s){
    s.insert(son);
    int ans = 0;
    for(auto v : graph[son]){
        if(v == father) continue;
        if(s.count(v)) return 1;
        if(dfs(v, son, s)) ans = 1;
    }
    return ans;

}

int main(void){

    return 0;
}