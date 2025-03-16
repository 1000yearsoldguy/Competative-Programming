//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1474
#include <iostream>
#include <vector>
#define N 1000000+10

using namespace std;

vector<bool> prime (N, true);
vector<int> primeSum (N, 0);

int digitSum(int n){
    if(n==0) return n;
    return (n%10) + digitSum(n/10);
}

void sieve(int n) {
    prime[0] = false;
    prime[1] = false;

    for(int i=2;i<=N;i++){
        primeSum[i] = primeSum[i-1];
        if(prime[i]){
            if(prime[digitSum(i)]) primeSum[i]++;

            for(int j=i+i;j<=N;j+=i) prime[j] = false;
        }
    }
}

int main(){
    sieve(N);

    int t;
    scanf("%d", &t);
    while(t--){
        int a,b;
        scanf("%d%d", &a, &b);
        printf("%d\n", primeSum[b] - primeSum[a-1]);
    }
}
