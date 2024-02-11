#include<iostream>
using namespace std;

class Student{

    public:

    int age;
    int const rollNumber;

    int &x;

    Student(int r, int age) : rollNumber(r), age(age), x(this -> age){

    }

    void display(){
        cout << rollNumber << " " << age << " " << x << endl;
    }
};

int main(){

    Student s1(38, 18);
    s1.display();
}