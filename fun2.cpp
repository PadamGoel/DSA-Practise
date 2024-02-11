#include<iostream>
using namespace std;

int multiply( int a, int b){
  int  multiply = a*b;
    return multiply;
}

void k(int n){
    for(int i=1; i<=n; i++){
        cout << i << endl;
    }
    return;
}

int main(){


    int a = multiply(5,3);
    cout << a << endl;


    k(10);
}