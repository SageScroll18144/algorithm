#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9+7;

void merge(vector<int> &v){
    if(v.size()==0) return;

    vector<int> u1, u2;

    for(int i = 0; i < v.size()/2; i++) u1.push_back(v[i]);
    for(int i = v.size()/2; i < v.size(); i++) u2.push_back(v[i]);

    merge(u1);
    merge(u2);

    u1.push_back(inf);
    u2.push_back(inf);

    int init1 = 0;
    int init2 = 0;

    for(int i = 0; i < v.size(); i++){
        if(u1[init1] < u2[init2]){
            v[i] = u1[init1];
            init1++;
        }else{
            v[i] = u2[init2];
            init2++;
        }
    }
    return;
}

int main(){



    return 0;
}