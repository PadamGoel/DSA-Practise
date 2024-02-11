#include<iostream>
using namespace std;

void B(){
    cout << 3 << endl;
}

void A(int n){
    cout << n << endl;
    cout << 5 << endl;
    B();
        cout << 2 << endl;
    
}

int main(){
    int n = 10;
    cout << 1 << endl;
    A(n);
    cout << n << endl;
    cout << 4 << endl;

}