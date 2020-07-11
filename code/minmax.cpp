#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;
const int max_depth = 5;
const int inf = 1e9+7;

vector<int> graph[maxn];
int weight[maxn];

int minmax(int node, int depth, bool isMaximizing){
    if(depth==0 || depth==max_depth) return weight[node];
    if(isMaximizing){
        int value = -inf;
        for(auto v : graph[node]){
            value = max(value, minmax(v, --depth, false));
        }
        return value;
    }else{
        int value = inf;
        for(auto v : graph[node]){
            value = min(value, minmax(v, --depth, true));
        }
        return value;
    }


}

int main(){

    return 0;
}