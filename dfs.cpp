#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> path;

int dfs(int node, vector<int> graph[], bool visited[], int element){

    visited[node] = true;
    path.push_back(node);
    if(node == element){
	return node;
    }else{
	    for(int i = 0; i < graph[node].size(); i++){
		if(visited[graph[node][i]] == false){
		    return dfs(graph[node][i], graph, visited, element);
		}else if(visited[graph[node][i]] == true && (i == graph[node].size() - 1)){
		    path.pop_back();
		    return dfs(path[path.size() - 1], graph, visited, element);
		}
	    }
    }

    return 0;

}
vector<int> getPath(){

    return path;

}
int main(){

    int node;

    cin >> node;

    vector<int> v[node];
    bool visited[node];

    for(int i = 0; i < node; i++){
        visited[i] = false;
    }
    ///graph = [[1, 2],[0],[0]] -> [nó][conexões]
    
    
    v[0].push_back(1);
    v[0].push_back(2);

    v[1].push_back(0);
   
    
    v[2].push_back(0);
    
    dfs(0, v, visited, 0);
    vector<int> p = getPath();

    for(int i = 0; i < p.size(); i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    
    return 0;
}
