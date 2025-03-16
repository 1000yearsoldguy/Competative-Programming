//https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
#include<stdio.h>
int main(){
    int a[1000], n, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    printf("%d", sum);
}
