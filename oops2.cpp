#include<iostream>
using namespace std;

class Student{

    public:
    int rollNumber;

    private:
    int age;

    public:

    //Default Constructor
    Student(){
        cout << "Constructor 1 called !" << endl;
    }

    //Parameterized Constructor
    Student(int rollNumber){
        cout << "This : " << this << endl;
        cout << "Constructor 2 called !" << endl;
        this ->  rollNumber = rollNumber;
    }

    Student(int r, int a){
        cout << "Constructor 3 called !" << endl;
        rollNumber = r;
        age = a;
    }

    void display(){
        cout << rollNumber << " " << age << endl;
    }
};

int main(){

    Student s1(10, 1001);
    s1.display();

    Student s2(20);
    s2.display();
    cout << "Address of s2 is : " << &s2 << endl;

    Student s3;
}