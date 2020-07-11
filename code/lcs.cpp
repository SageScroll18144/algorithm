#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e8+10;

int dp[maxn][maxn];

int a[maxn];
int b[maxn];

int n, m;

int main(){

    scanf("%d%d", &n, &m);

    for (int i = 1; i <= n; i++){
        for (int j = 1; i <= m; j++){
            if(a[i]==b[j]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
           
    }
    cout<<dp[n][m]<<endl;

    return 0;
}