#include<iostream>
using namespace std;

template <typename T, typename V>
class Pair{
    T x;
    V y;

    public:

    void setX(T x){
        this -> x = x;
    }
    T getX(){
        return x;
    }
    void setY(V y){
        this -> y = y;
    }
    V getY(){
        return y;
    }
};

int main(){
    Pair <int, double> p1;
    p1.setX(10.23);
    p1.setY(20.25);
    cout << p1.getX() << " " << p1.getY() << " " << endl;

    Pair <Pair<int,double>, char> p2;
    p2.setY('p');

    Pair<int,double> p3;
    p3.setX(15);
    p3.setY(3.145);

    p2.setX(p3);

    cout << p2.getX().getX() << " " << p2.getX().getY() << " " << p2.getY() << " " << endl;
}