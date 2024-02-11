#include<iostream>
using namespace std;

int allIndex(int arr[] , int size , int x ){
    if(size == 0){
        return 0;
    }

   
    for(int i = 0; i < size; i++){
        if(arr[i] == x){
            return i;
        }
    }
     int si = allIndex(arr + 1 , size - 1 , x );
}

int main(){

    int n;
    cin >> n;
    int * p = new int[n];

    for(int i=0; i<n; i++){
        cin >> p[i];
    }

    int x;
    cin >> x;

    int output = allIndex(p , n , x  );
    cout << output;
}