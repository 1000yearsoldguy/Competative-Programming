//https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    for(int n=a; n<=b; n++){
        if(1<=n && 9>=n){
            if(n == 1)cout<<"one"<<endl;
            else if(n == 2)cout<<"two"<<endl;
            else if(n == 3)cout<<"three"<<endl;
            else if(n == 4)cout<<"four"<<endl;
            else if(n == 5)cout<<"five"<<endl;
            else if(n == 6)cout<<"six"<<endl;
            else if(n == 7)cout<<"seven"<<endl;
            else if(n == 8)cout<<"eight"<<endl;
            else if(n == 9)cout<<"nine"<<endl;
        }
        else if(n>9 && n%2 == 0)cout<<"even"<<endl;
        else if(n>9 && n%2 == 1)cout<<"odd"<<endl;
    }
}
