#include<iostream>
using namespace std;
int main(){

    int a[5] = {1,2,3};
    for(int i=0; i<3; i++){
        cout << a[i] << endl;
    }

    cout << a << endl;

    char b[] = "abc";
    cout << b << endl;

    char * c = &b[0];
    cout << c << endl;

    char c1 = 'a';
    char * pc = &c1;
    cout << c1 << endl;
    cout << pc << endl;

    char str[3] = "hj";
    cout << str << endl;

    char stri[] = "abcdef";
    char * k = &stri[2];
    cout << stri << endl;
    cout << k << endl;
}