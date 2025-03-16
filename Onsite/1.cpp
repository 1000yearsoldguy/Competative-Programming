#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x, sum=0; cin >> t >> x;
    for(int i=1; i<=t; i++){
        int n; cin >> n;
        if(i%2==0)sum += (n-1);
        else sum += n;
    }
    if(sum==x || sum < x) cout << "Yes\n";
    else cout << "No\n";
}
