#include<iostream>
using namespace std;

int summing(int * a, int n){

    cout << sizeof(a) << endl;
    int sum = 0;
    for(int i=0; i<n; i++){
    sum = sum + a[i];
}
   return sum;
}

int main (){

    int arr[3] = {1,4,3};

    int * p = &arr[0];
    cout << p << endl;

    int * p1 = &arr[2];
    cout << p1 << endl;

    cout << *p << endl;
    cout << *p1 << endl;
    cout << *(p+1) << endl;

    int n;
    cin >> n;

    int input[n];

    for(int i=0; i<n; i++){
        cin >> input[i];
    }

    int k = summing(input  , n);
    cout << k;
}