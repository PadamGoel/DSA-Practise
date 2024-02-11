#include<iostream>
using namespace std;

void printMyArray(int b[], int n){
    cout << sizeof(b) << endl;
    for(int i=0; i<n; i++){
        cout << b[i] << endl;
    }
}

int main (){
    int b[5];

    cout << b << endl;
    cout << sizeof(b) << endl;

    for(int i=0; i<5; i++){
        cin >> b[i];
    }
    printMyArray(b,5);
}