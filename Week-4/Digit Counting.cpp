//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3666
#include<iostream>
#include<cstring> //for memset
#include<cstdio> // for scanf & printf
using namespace std;

int main(){
    int n,array[10],s;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        memset(array,0,sizeof(array));
        scanf("%d",&s);

        for(int j=1;j<=s;j++){
            int temp=j;
            while(temp){
                array[temp%10]++;
                temp=temp/10;
            }
        }
        for(int k=0;k<9;k++) printf("%d ",array[k]);
        printf("%d\n",array[9]);
    }
}
