#include <iostream>
#include <queue>
using namespace std;

int main (){
    priority_queue<int> maxHeap;//Descending
    priority_queue<int, vector<int>, greater<int>> minHeap;//Ascending

    maxHeap.push(1);
    q1.push(3);
    q1.push(4);
    q1.push(2);
    while(!q1.empty()){
        cout << " " << q1.top();
        q1.pop();
    }

    cout << "\n\n\n" << endl;

    minHeap.push(1);
    minHeap.push(3);
    minHeap.push(4);
    minHeap.push(2);
    while(!minHeap.empty()){
        cout << " " << minHeap.top();
        minHeap.pop();
    }
}
