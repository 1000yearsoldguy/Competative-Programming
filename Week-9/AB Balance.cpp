//https://codeforces.com/contest/1606/problem/A
#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string str; cin >> str;
        if(str[0] != str[str.length()-1]) str[0] = str[str.length()-1];
        cout << str << endl;
    }
}
