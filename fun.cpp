#include<iostream>
using namespace std;

int factorial (int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac = fac * i;
    }
    return fac;
}
int main(){
    int n , r;
    cin >> n >> r;

    cout << factorial(n) / ( factorial(r) * factorial(n-r));
    // int factorial_n = factorial(n);
    // int factorial_r = factorial(r);
    // int factorial_n_r = factorial(n-r);
    // int ans = factorial_n / (factorial_r * factorial_n_r);
    // cout << ans;
}


