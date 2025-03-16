//https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
#include<stdio.h>
int main(){
    int n, k, and=0, or=0, xor=0;
    scanf("%d %d", &n, &k);
    for(int a=1; a<=n; a++){
        for(int b=a+1; b<=n; b++){
           if((a&b)<k && and<(a&b)) and = a&b;
           if((a|b)<k && or<(a|b)) or = a|b;
           if((a^b)<k && xor<(a^b)) xor = a^b;
        }
    }
    printf("%d\n%d\n%d", and, or, xor);
}
