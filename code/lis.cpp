#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e3+10;
int n;
int a[maxn];

int main(){
    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[j]<a[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }

        }
    }
    int ans = dp[0];
    for (int i = 1; i < n; i++){
        ans = max(ans, dp[i]);
    }
    cout<<ans<<endl;

}