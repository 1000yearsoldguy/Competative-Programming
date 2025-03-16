//https://codeforces.com/problemset/problem/1638/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int n; scanf("%d", &n);
        vector<int>vec(n);

        int toggleElement, start, end;
        toggleElement = start = end = -1;

        for(int i=0; i<n; i++) scanf("%d", &vec[i]);;

        for(int i=0; i<n; i++){
            if(toggleElement == -1 && vec[i] != i+1){
                toggleElement=i+1;
                start=i;
            }
            if(toggleElement != -1 && vec[i] == toggleElement){
                end = i;
                break;
            }
        }

        if(toggleElement == -1) for(int i=0; i<n; i++) printf("%d ", vec[i]);
        else{
            int i=start, j=end;
            while(i<=j){
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;

                i++; j--;
            }

            for(int i=0; i<n; i++) printf("%d ", vec[i]);
        }
        printf("\n");
    }
}
