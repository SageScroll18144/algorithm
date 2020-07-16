#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

int tree[4*N];

int a[N];

void build(int p, int l, int r){
    if(l==r){
        tree[p] = a[l];
    }else{
        int m = (l+r)/2, lc = 2*p, rc = lc + 1;
        
        build(lc, l, m);
        build(rc, m+1, r);

        tree[p] = min(tree[lc], tree[rc]);
    }

}

void update(int p, int l, int r, int i, int x){
    if(l==r){
        tree[p] = x;
    }else{
        int m = (l+r)/2, lc = 2*p, rc = lc + 1;
        if(i <= m){
            update(lc, l, m, i, x);
        }else{
            update(rc, m+1, r, i, x);
        }

        tree[p] = min(tree[lc], tree[rc]);
    }
}

int query(int p, int l, int r, int ql, int qr){
    if(l>=ql && r<=qr){
        return tree[p];
    }else{
        int m = (l+r)/2, lc = 2*p, rc = lc + 1;
        if(qr<=m){
            query(lc, l, m, ql, qr);
        }else if(ql>m){
            query(rc, m+1, r, ql, qr);
        }
        else{
            tree[p] = min(query(lc, l, m, ql, qr), query(rc, m+1, r, ql, qr));
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    //1-based
    build(1, 1, n);
    //0-based
    build(1, 0, n-1);
    return 0;
}