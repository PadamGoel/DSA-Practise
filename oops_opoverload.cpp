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

    fraction operator+(fraction f2){
        int lcm = den * (f2.den);
        int x = lcm / den;
        int y = lcm / (f2.den);

        int n = x * num + y * (f2.num);

        //num = n;
        //den = lcm; 

        fraction fnew(n,lcm);
        fnew.simplify();
        return fnew;
    }

    fraction operator*(fraction f2){
        int n = num * (f2.num);
        int d = den * (f2.den);

        fraction fnew(n, d);
        fnew.simplify();
        return fnew;
    }

    bool operator==(fraction f2){
        return (num == f2.num && den == f2.den);
    }

    fraction operator++(){
        num = num + den;
        simplify();
        return *this;
    }
};

int main(){

    fraction f1(12, 5);
    fraction f2(10, 2);

    //f1.sum(f2)

    fraction f3 = f1 + f2;  // isme jaise hi humne + sign use kiya operator+ wala function apne aap call hogya jisme f1 is this and f2 is argument.
                           // Phir us function mein humne ek naya function type ka new variable fnew banaya jisme humara add kiya hua fraction store ho jayega
                           // phir hum usko return kar denge aur voh f3 mein chala jayega. Isko hum simple aise samajh sakte hai (int c = a + b)

    f2.simplify();
    f1.print();
    f2.print();
    f3.print();

    fraction f4 = f1*f2;
    f4.print();

    if(f1 == f2){
        cout << "Equal" << endl;
    }
    else{
        cout << "Not Equal" << endl;
    }

    // ++f1;
    // fraction f5(f1);
    // f5.print();

    fraction f5 = ++f1;
    f5.print();
}