//https://www.hackerrank.com/challenges/balanced-brackets/problem
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int t,i;
    stack<char>stack;
    string str;

    cin>>t;
    while(t--){
        cin>>str;

        for(i=0; i<str.size(); i++){
            if(str[i]=='(') stack.push(str[i]);
            else if(str[i]=='{') stack.push(str[i]);
            else if(str[i]=='[') stack.push(str[i]);

            else if(str[i]==')'){
                if(!stack.empty() && stack.top()=='(') stack.pop();
                else break;
            }
            else if(str[i]=='}'){
                if(!stack.empty() && stack.top()=='{') stack.pop();
                else break;
            }
            else if(str[i]==']'){
                if(!stack.empty() && stack.top()=='[') stack.pop();
                else break;
            }
        }

        if(stack.empty() && i == str.size()) printf("YES\n");
        else printf("NO\n");

        while(!stack.empty()) stack.pop();
    }
}
