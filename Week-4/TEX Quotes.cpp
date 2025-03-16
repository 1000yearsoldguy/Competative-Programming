//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
#include<stdio.h>
int main(){
    char ch;
    int count=0;

    while(scanf("%c",&ch)!=EOF){
        if(ch == '"'){
            count++;
            if(count % 2) printf("``");
            else printf("''");
        }
        else printf("%c",ch);
    }
}
