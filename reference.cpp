#include<iostream>
using namespace std;

int increment(int n){
    n++;
    return n;
}

void incremen(int & t){
    t++;
}

int& f(int n){
    int a = n ;
    return a;
}

int * f2(){
    int i = 10;
    return &i;
}

int main(){

    int * p = f2();

    int i = 10;
    int& j = i;

    int& k1 = f(i);
    cout << k1 << endl;

    increment(i);
    cout << i << endl;

    i++;
    cout << j << endl;

    int k = 100;
    j=k;
    cout << i << endl;
    cout << &j << endl;
    cout << &i << endl;
}