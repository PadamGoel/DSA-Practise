#include<iostream>
using namespace std;

bool is_sorted(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    bool isSmallerSorted = is_sorted(arr + 1 , size - 1);
    return isSmallerSorted;
}

int main(){

    int n;
    cin >> n;

     int * p = new int[n];

     for(int i = 0; i<n; i++){
        cin >> p[i];
     }

     bool k = is_sorted(p , n);
     cout << k << endl;
}