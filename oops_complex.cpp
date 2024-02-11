#include<iostream>
using namespace std;

class Complex{

    int real;
    int complex;

    public:

    Complex(int real, int complex){
        this -> real = real;
        this -> complex = complex;
    }

    void display(){
        cout << real << " + " << complex << "i" << endl;
    }

    void sum(Complex c2){
        real = real + (c2.real);
        complex = complex + (c2.complex);
    }
};

int main(){
    Complex c1(3,2);
    Complex c2(2,3);

    c1.sum(c2);

    c1.display();
    c2.display();
}