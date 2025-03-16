//https://codeforces.com/contest/1651/problem/A
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        n=pow(2,n)-1;
        cout << n << endl;
    }
}
