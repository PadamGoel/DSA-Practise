#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    while(n != 0){
        int k = n % 10;
        ans += k;
        n /= 10;
    }
    cout << ans << endl;
}