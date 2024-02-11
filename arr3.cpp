#include<iostream>
using namespace std;

int sumOfArray(int input[], int n){

    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + input[i];
    }
    
    return sum;
}

int main(){

    int n;
    cin >> n;

    int input[100];

    for(int i=0; i<n; i++){
        cin >> input[i];
    }

    int k = sumOfArray(input,n);
    cout << k;
}