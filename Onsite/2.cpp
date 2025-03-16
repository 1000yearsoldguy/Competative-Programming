#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c; cin >> a >> b >> c;
    char ch;

    if(c%2){
        ch = a>b ? '>' :'<';
        ch = a==b ? '=' : ch;
    }
    else{
        if(a<0) a = -1*a;
        if(b<0) b = -1*b;
        ch = a>b ? '>' :'<';
        ch = a==b ? '=' : ch;
    }
    cout << ch << "\n";


}
