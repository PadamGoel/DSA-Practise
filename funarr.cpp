#include<iostream>
using namespace std;

int max(int arr[], int n){
    int a = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i] > a){
            a = arr[i];
        }
    }
    return a;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }

    cout << max(arr,n);
}