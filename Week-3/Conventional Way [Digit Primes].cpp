#include<iostream>
#include<vector>
using namespace std;

bool Prime(int x){
    for(int i=2; i*i<=x; i++){
        if(x%i == 0) return false;
    }
    return true;
}
int SumOfDigits(int val){
    int sum=0;
    while(val>0){
        sum += val%10;
        val = val/10;
    }
    return sum;
}
void digitPrime(vector<pair<int,int>> vp){
    for(pair<int, int> pr: vp){
        int count=0;
        for(int i=pr.first; i<=pr.second; i++){
            if(Prime(i) && Prime(SumOfDigits(i))) count++;
        }
        printf("\n%d", count);
    }
}

int main(){
    int N, t1, t2;
    vector<pair<int, int>> vec;

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &t1, &t2);
        vec.push_back(make_pair(t1, t2));
    }
    digitPrime(vec);
}
