#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
    if(b==0) return a;
    return mdc(b, a%b);
}

int main(){

    return 0;
}