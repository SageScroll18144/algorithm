#include <bits/stdc++.h>
#define ii pair<int, int>
#define ll long long int

using namespace std;

const int maxn = 1e5+10;

int tree[maxn];
vector<ii> g;

int n;

void update(int x, int val){
    while(x < maxn){
        tree[x]+=val;
        x+=(x&-x);
    }
}
int query(int x){
    int ans = 0;
    while(x > 0){
        ans+=tree[x];
        x-=(x&-x);
    }
    return ans;
}

int main(){

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int u;
        scanf("%d", &u);

        g.push_back(make_pair(u, i));       
    }

    sort(g.begin(), g.end());
    ll inv = 0;
    
    for(int i=n-1; i>=0;i--){
        inv+=query(g[i].second);
        update(g[i].second, 1);
    }

    printf("%lld\n", inv);

    return 0;
}