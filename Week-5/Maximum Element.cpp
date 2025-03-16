//https://www.hackerrank.com/challenges/maximum-element/problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> max;
    stack<int> stack;

    max.push(0);

    int size; cin>>size;

    while (size--){
        int query; cin>>query;

        switch(query){
            case 1:
                cin>>query;
                if(query >= max.top()) max.push(query);
                stack.push(query);
                break;

            case 2:
                if(stack.top() == max.top()) max.pop();
                stack.pop();
                break;

            case 3:
                cout<<max.top()<<endl;
                break;
            default:
                break;
        }
    }
}
