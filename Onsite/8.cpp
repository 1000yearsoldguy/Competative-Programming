#include <bits/stdc++.h>
using namespace std;

void Sieve(int n, vector<int> &factors){
    for(int p = 2; p <= n; p++){
            for(int i = p; i <= n; i += p)
                factors[i]++;
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;
    int n; cin >> n;
    vector<int> factors(n+1, 1);
    Sieve(n, factors);
    for(int i = 1; i < n; i++) count += factors[i];
    cout << count << endl;
}
