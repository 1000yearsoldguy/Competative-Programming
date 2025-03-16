//https://www.hackerrank.com/challenges/s10-basic-statistics/problem
#include<bits/stdc++.h>
using namespace std;
float medianOf(int array[], int size){
    if (size%2) return array[(size-1)/2];
    else return (float(array[size/2 - 1]+array[size/2]))/2;
}
int modeOf(int array[], int size){
    int mode=0, max=0;
    for(int i=0; i<size; i++){
        int count=0;
        for(int j=0; j<size; j++){
            if(array[i] == array[j]) count++;
            if(count > max){
                max = count;
                if(max == 1) mode = array[0];
                mode = array[i];
            }
        }
    }
    return mode;
}
int main(){
    int n;
    cin >> n;
    int arr[n];

    float mean;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mean += arr[i];
    }
    mean = mean/n;

    sort(arr,arr+n);

    cout << fixed << setprecision(1) << mean << endl;
    cout << fixed << setprecision(1) << medianOf(arr, n) << endl;
    cout << modeOf(arr, n) << endl;
}
