#include<iostream>
using namespace std;

class Fraction{
    private:

    int num;
    int den;

    public:

    Fraction(){

    }

    Fraction(int num, int den){
        cout << "this : " << this << endl;

        this -> num = num;
        this -> den = den;
    }

    void print() const{
        cout << num << "/" << den << endl;
    }

    int getNum() const{
        return num;
    }

    int getDen() const{
        return den;
    }
};

int main(){

    Fraction const f1;

    cout << f1.getNum() << " " << f1.getDen() << endl;
    f1.print();
}