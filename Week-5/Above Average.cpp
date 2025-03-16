//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1311
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int C;

    scanf("%d", &C);

    for(int i=0; i<C; i++){
        int N, marks[1000], sum=0;

        scanf("%d", &N);

        for(int j=0; j<N; j++){
            scanf("%d", &marks[j]);
            sum += marks[j];
        }
        float average = sum/(float)N;

        float count=0;
        for(int j=0; j<N; j++){
            if(marks[j] > average) count++;
        }
        float percentage = 100*(count/(float)N);

        printf("%.3f%%\n", percentage);
    }
}
