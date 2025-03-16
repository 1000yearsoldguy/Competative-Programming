//https://codeforces.com/contest/1650/problem/A
#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        char c; cin >> c;
        bool flag=false;
        for(int i=0; i<str.length(); i+=2) if(str[i]==c){
            flag=true; break;
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
}
