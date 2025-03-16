//https://codeforces.com/contest/1650/problem/B
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
		int a, b, c; cin >> a >> b >> c;

		int maximum=b/c+b%c;
		int tempRange = b/c*c-1;

		if(tempRange>=a) maximum=max(maximum,tempRange/c+tempRange%c);

		cout << maximum << endl;
    }
}
