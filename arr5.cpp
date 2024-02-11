#include<iostream>
using namespace std;

int findx(int arr[], int n, int val){
    int i=0;
    for(; i<n; i++){
        if( arr[i] == val){
            return i;
        }
    }
    return -1;
}


int main(){

    int n ;
    cin >> n;

     int input[100];

     for(int i=0; i<n; i++){
        cin >> input[i];
     }

     int x;
     cin >> x;

     int k = findx(input , n , x);
     cout << k;
}