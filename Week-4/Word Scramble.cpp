//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=424
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string str;
    while (getline(cin, str)) {
        stringstream ss;
        ss << str;

        int count = 0;
        while (ss >> str) {
            if (count > 0) cout << " ";
            for ( int i=str.size()-1; i>=0; i--) cout<<str[i];
            count++;
        }
        cout<<endl;
    }
}
