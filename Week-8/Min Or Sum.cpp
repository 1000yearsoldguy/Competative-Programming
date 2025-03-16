//https://codeforces.com/contest/1635/problem/A
#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n], sum=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum=sum|arr[i];
        }
        cout << sum << endl;
    }
}
