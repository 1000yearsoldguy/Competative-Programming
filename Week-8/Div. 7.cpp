#include <iostream>
using namespace std;

int main (){
    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]%7){
            int temp = 10*(arr[i]/10);
            for(int j=temp; j <= temp+9; j++){
                if(j%7==0){
                    arr[i] = j;
                    break;
                }
            }
        }
    }
    for(int x : arr) cout << x << endl;
}
