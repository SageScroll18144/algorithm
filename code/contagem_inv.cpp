#include <bits/stdc++.h>

using namespace std;

int merge(vector<int> &v){
    if(v.size()==1) return 0;

    int inv = 0;

    vector<int> u1, u2;

    for(int i = 0; i < v.size()/2; i++) u1.push_back(v[i]);
    for(int i = v.size()/2; i < v.size(); i++) u2.push_back(v[i]);
    
    inv+=merge(u1);
    inv+=merge(u2);

    u1.push_back(INT_MAX);
    u2.push_back(INT_MAX);

    int init1 = 0;
    int init2 = 0;

    for(int i = 0; i < v.size(); i++){
        if(u1[init1] <= u2[init2]){
            v[i] = u1[init1];
            init1++;
        }else{
            v[i] = u2[init2];
            init2++;

            inv+=u1.size()-init1-1;
        }

    }
    return inv;
}

int main(){

    return 0;
}