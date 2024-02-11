#include<iostream>
using namespace std;

class fraction{

    private:

    int num;
    int den;

    public:

    fraction(int num, int den){
        cout << "this : " << this << endl;

        this -> num = num;
        this -> den = den;
    }

    void print(){
        cout << num << "/" << den << endl;
    }

    void simplify(){
        int gcd = 1;
        int j= min(num, den);
        for(int i=1; i<=j; i++){
            if(num % i == 0 && den % i == 0){
                gcd = i;
            }
        }

        num = num / gcd;
        den = den / gcd;
    }

    void sum(fraction f2){
        int lcm = den * (f2.den);
        int x = lcm / den;
        int y = lcm / (f2.den);

        int n = x * num + y * (f2.num);

        num = n;
        den = lcm; 

        simplify();
    }
};

int main(){

    fraction f1(12, 5);
    fraction f2(10, 2);

    f1.sum(f2);

    f1.print();
    f2.print();
}