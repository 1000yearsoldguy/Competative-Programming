//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1724
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n, count=0;
    scanf("%d", &n);
    while(n--){
        count++;
        int a, b, sum=0;
        scanf("%d%d", &a, &b);
        for(int i=a; i<=b; i++){
            if(!(i%2)) sum = sum + i;
        }
        printf("Case %d: %d\n", count, sum);
    }
}
