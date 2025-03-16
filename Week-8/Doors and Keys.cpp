//https://codeforces.com/problemset/problem/1644/A
#include<bits/stdc++.h>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--) {
        string str;
        cin >> str;

        bool rKeyFound, gKeyFound, bKeyFound, found;
        rKeyFound=gKeyFound=bKeyFound=false;
        found=true;

        for(char ch : str){
            if(ch>='a' && ch<='z'){
                if(ch=='r') rKeyFound=true;
                else if(ch=='g') gKeyFound=true;
                else if(ch=='b') bKeyFound=true;
            }
            else {
                if((ch=='R' && rKeyFound==true) || (ch=='G' && gKeyFound==true) || (ch=='B' && bKeyFound==true)) continue;
                else found=false;
            }
            if(!found) break;
        }
        if(found) yes;
        else no;
    }
}
