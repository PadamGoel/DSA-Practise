#include<iostream>
using namespace std;

int factorial(int n){
    cout << n << endl;
    if(n==0){
        return 1;
    }
    int sf = factorial(n-1);
    return n * sf;
}

int main(){

    int n;
    cin >> n;

    int output = factorial(n);
    cout << output << endl;
}