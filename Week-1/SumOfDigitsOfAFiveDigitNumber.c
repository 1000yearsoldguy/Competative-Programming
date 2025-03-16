//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
#include<stdio.h>
int main(){
    int n, sum=0, remainder;
    scanf("%d", &n);
    while(n!=0){
        remainder = n%10;
        sum+=remainder;
        n = n/10;
    }
    printf("%d", sum);
}
