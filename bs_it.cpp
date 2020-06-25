#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e4+10;

int a[maxn];

int bs(int e){

    int inicio = 0;
    int fim = (sizeof(a)/sizeof(int)) - 1;

    while(inicio <= fim){
        int mid = (inicio+fim)/2;

        if(a[mid] == e) return mid;
        else if(a[mid] > e) fim = mid - 1;
        else if(a[mid] < e) inicio = mid + 1; 

    }

    return -1;
}

int main(void){

    for (int i = 0; i < maxn; i++){
        a[i]=i;
    }
    

    cout<<bs(1);

    return 0;
}