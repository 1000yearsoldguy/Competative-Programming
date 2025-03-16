//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1288
#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c;
    while(scanf("%lf%lf%lf", &a, &b, &c) != EOF){

        //Heron's Formula
        double s=(a+b+c)/2; // s is semi-perimeter
        double area=4*sqrt(s*(s-a)*(s-b)*(s-c))/3;

        if(area > 0){
            printf("%.3lf\n", area);
        }
        else printf("-1.000\n");
    }
}
