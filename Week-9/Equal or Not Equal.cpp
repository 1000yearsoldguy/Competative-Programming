//https://codeforces.com/contest/1620/problem/A
#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        int count = 0;
        for(char c : str) if(c == 'N') count++;

        if(count==1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
