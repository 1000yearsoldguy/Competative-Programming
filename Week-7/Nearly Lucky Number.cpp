//https://codeforces.com/problemset/problem/110/A
#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    int count=0;
    for(char chars : str) if(chars == '4' || chars == '7') count++;

    if(count == 4 || count == 7) cout<< "YES" <<endl;
    else cout<< "NO" <<endl;
}
