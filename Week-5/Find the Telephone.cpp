//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1862
#include <stdio.h>
int main(){
    char chars[30];

    while(gets(chars) != NULL){
        for(int i=0; chars[i] != NULL; i++){
            if(chars[i]=='0' || chars[i]=='1' || chars[i]=='-') printf("%c",chars[i]);
            else if(chars[i]>='A' && chars[i]<='C') printf("2");
            else if(chars[i]>='D' && chars[i]<='F') printf("3");
            else if(chars[i]>='G' && chars[i]<='I') printf("4");
            else if(chars[i]>='J' && chars[i]<='L') printf("5");
            else if(chars[i]>='M' && chars[i]<='O') printf("6");
            else if(chars[i]>='P' && chars[i]<='S') printf("7");
            else if(chars[i]>='T' && chars[i]<='V') printf("8");
            else if(chars[i]>='W' && chars[i]<='Z') printf("9");
        }
        printf("\n");
    }
}
