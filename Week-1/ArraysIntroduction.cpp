//https://www.hackerrank.com/challenges/arrays-introduction/problem
#include<iostream>
using namespace std;

int main(){
    int A[1000], N;

    cin>>N;
    for(int i=1; i<=N; i++){
        cin>>A[i];
    }

    for(int i=N; i>=1; i--){
        cout<<A[i]<<" ";
    }
}
