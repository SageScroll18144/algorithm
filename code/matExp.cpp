#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 2;
const int mod = 1e9+7;

struct Matrix{
    ll mat[N][N];
    Matrix operator * (Matrix &p){
        Matrix ans;
        for (int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                for(int k = ans.mat[i][j] = 0; k < N; k++)
                    ans.mat[i][j] = (ans.mat[i][j] + mat[k][i] * p.mat[k][j]) % mod;
        return ans;
    }
};

Matrix fExp(Matrix a, ll b){
    Matrix ans;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            ans.mat[i][j] = i==j;
    
    while(b){
        if(b&1) ans = ans * a;
        a = a*a;
        b>>=1;
    }
}

int main(){

    return 0;
}