#include <bits/stdc++.h>

using namespace std;

const int maxl = 1e4+20;
const int maxc = 1e4+20;

int l[] = {-1, 1, 0, 0};
int c[] = {0, 0, -1, 1};

int n, m;

int graph[maxl][maxc];  

bool mark[maxl][maxc];

void dfs(int x, int y){

    mark[x][y] = true;

    for (int i = 0; i < 4; i++){
        int a = l[i];
        int b = c[i];
 
        if(a < 0 || a >= n || b < 0 || b >= m || mark[a][b]) continue;
            
        dfs(a, b); 
    }
    

}

int main(void){

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &graph[i][j]);
        }
        
    }

    int cc = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(!mark[i][j]){
                dfs(i, j); ++cc;
            }
        }
        
    }
    


    return 0;
}