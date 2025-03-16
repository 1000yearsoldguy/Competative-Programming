#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue <int> maxHeap;
    priority_queue <int, vector<int>, greater<int>> minHeap;

    int n;
    cin >> n;

    while(n--){
        int temp;
        cin >> temp;

        minHeap.push(temp);
        maxHeap.push(minHeap.top());
        minHeap.pop();

        while(maxHeap.size()>minHeap.size()) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }

        vector<double>med;
        if(minHeap.size() > maxHeap.size()) med.push_back(minHeap.top());
        else if(maxHeap.size() == minHeap.size()) med.push_back(double(maxHeap.top()+minHeap.top()) /2);

        for(double i : med) cout << fixed << setprecision(1) << i << endl;
    }
}
