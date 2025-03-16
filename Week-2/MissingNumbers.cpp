//https://www.hackerrank.com/contests/algorithms-practice-match-2/challenges/missing-numbers
#include<iostream>
#include<vector>
using namespace std;
vector<int> missingNumbers(vector<int>a, vector<int>b){
    vector<int>count(10010,0);//Initialized 10010 space with element 0

    for(int i=0; i<a.size(); i++){
        count[a[i]]--;
    }
    for(int i=0; i<b.size(); i++){
        count[b[i]]++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>vec1(n);
    for(int i=0; i<n; i++){
        cin>>vec1[i];
    }
    int m;
    cin>>m;
    vector<int>vec2(m);
    for(int i=0; i<m; i++){
        cin>>vec2[i];
    }
    vector<int>temp = missingNumbers(vec1, vec2);

    for(int i=0; i<temp.size(); i++){
        if(temp[i]>0)cout<<i<<" ";
    }
}
