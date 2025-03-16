//https://www.hackerrank.com/challenges/lonely-integer/problem
#include<iostream>
using namespace std;
int lonelyinteger (int array[], int size){
    int count;
    for(int i=0; i<size; i++){
        count=0;
        for(int j=0; j<size; j++){
            if(i!=j){
                if(array[i]==array[j]) count++;
            }
        }
        if(count==0){
            count=i;
            break;
        }
    }
    return array[count];
}
int main(){
    int a[100], n, count=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<lonelyinteger(a,n);
}
