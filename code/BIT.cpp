#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

int tree[N];

int n;

void update(int x, int val){
    while(x < N){
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

    return 0;
}