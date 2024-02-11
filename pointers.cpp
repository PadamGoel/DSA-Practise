#include<iostream>
using namespace std;
int main(){

    int i = 10;
    cout << i << endl;

    i++;
    cout << i << endl;
    
    int * p = &i;
    cout << p << endl;

    cout << *p << endl;

    (*p)++;
    cout << *p << endl;

    double d = 10.3;
    double * dp = &d;
    cout << dp << endl;

    (*dp)++;
    cout << *dp << endl;

    (dp)++;
    cout << dp << endl;

}