#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+10;
int tree[N]; 

void update(int x, int val){
    while(x<N){
        tree[x]+=val;
        x+=(x&-x);
    }
}

int query(int x){
    int ans = 0;
    while(x>0){
        ans+=tree[x];
        x-=(x&-x);
    }
    return ans;
}

int main(){

    scanf("%d", &n);

    vector<pair<int, int>> g;

    for(int i=1;i<n;i++){
        int u; 
        scanf("%d", &u);
        g.push_back({u, i});
    }

    sort(g.begin(), g.end());

    vector<int> safe;
    int last = INT_MAX;
    long long int total = 0;
    for(int i=n-1;i>=0;i--){
        if(g[i].first==last){
            total+=query(g[i].second);
            safe.push_back(g[i].second);
        }else{
            for(int j=0; j<safe.size();j++){
                update(g[i].second, 1);
            }
            total+=query(g[i].second);
            last = g[i].first;

            safe.clear();
            safe.push_back(g[i].second);
        }
    }

    return 0;
}