//https://www.hackerrank.com/challenges/c-tutorial-functions/problem
#include<iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d){
    if(a>b && a>c && a>d) return a;
    else if (b>c && b>d) return b;
    else if(c>d) return c;
    else  return d;
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a,b,c,d);
    cout<<ans<<endl;
}
