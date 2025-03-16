//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1287
#include<stdio.h>
int main(){
    int n, k;

	while (scanf("%d %d", &n, &k)!= EOF){
		int sum = n;
		while(n >= k) {
			int curr = n / k;
			sum += curr;
			n = (n%k)+curr;
		}
		printf("%d\n", sum);
	}
}
