#include<iostream>
using namespace std;

int find(int arr[], int size, int x){

    if(size == 0){
        return -1;
    }

    int ans = find(arr + 1, size - 1, x);
    if(arr[size] == x){
        return size;
    }
    if(ans == -1){
        if(arr[0] == x){
            return 0;
        }
        else {
            return -1;
        }
    }
    return ans + 1;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;

    cout << find(arr, n , x) << endl;
}