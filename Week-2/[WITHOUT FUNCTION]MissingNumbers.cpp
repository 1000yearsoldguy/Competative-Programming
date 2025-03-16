#include<iostream>
using namespace std;

int main(){
    int mx=-9999,mn=9999;
    int c[20000]={0}, n, m;
    cin>>n;
    for(int i=0,e; i<n; i++){
        cin>>e;
        c[e]--;
    }
    cin>>m;
    for(int i=0,e; i<m; i++){
        cin>>e;
        c[e]++;
        if(e<mn) mn=e;
        if(e>mx) mx=e;
    }
    for(int i = mn; i <= mx; i++){
        if(c[i] > 0)cout << i << " ";
    }
}
