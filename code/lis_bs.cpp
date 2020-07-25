#include <bits/stdc++.h>

using namespace std;

int lis(vector<int> &v){
    vector<int> pilha;

    for(int i=0;i<v.size();i++){
        auto it = lower_bound(pilha.begin(), pilha.end(), v[i]);

        if(it==pilha.end()) pilha.push_back(v[i]);
        else *it = v[i];//coloca no topo o maior
        
    }

    return pilha.size();
}

int main(){

    vector<int> s = {1,1,1};
    cout<<lis(s)<<endl;

    return 0;
}