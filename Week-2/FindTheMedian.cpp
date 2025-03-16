//https://www.hackerrank.com/challenges/find-the-median/problem
#include<bits/stdc++.h>
using namespace std;

int findMedian(int a[], int s){
    sort(a, a+s);
    return a[s/2];
}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<findMedian(arr, n);
}
