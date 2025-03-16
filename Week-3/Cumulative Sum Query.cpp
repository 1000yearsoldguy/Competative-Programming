//https://www.spoj.com/problems/CSUMQ/en/
#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    int array[n+10];
    int prefixSum[n+10];

    for(int i=0; i<n; i++){
        cin >> array[i];
        sum += array[i];
        prefixSum[i] = sum;
    }

    int q;
    cin >> q;
    while(q--){
        int i, j;
        cin >> i >> j;
        if(i==0) cout << prefixSum[j] << endl;
        else cout << prefixSum[j]-prefixSum[i-1] << endl;
    }
}
