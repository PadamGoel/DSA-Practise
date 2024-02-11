#include<iostream>
using namespace std;

class Student{

    public:
    int rollNumber;

    private:
    int age;

    public:

    ~Student(){
        cout << "Destructor called" << endl; 
    }

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

    Student s1(20, 18);
    s1.display();

    //Copy constructor
    Student s2(s1);
    s2.display();

    Student *s3 = new Student(s2);
    s3 -> display();

    //Copy assignment operator
    Student s4(54,89);
    s4.display();

    Student s5(45,98);
    s5.display();

    s5 = s4;

    s4.display();
    s5.display();

    // but we have made 5 objects but only 4 destrustors are called this is because of dynamic object in which memory is stored in heap and only s3 is address
    // and we want to deallocate the memory so delete s3 is necessary to call the distructor in this case.

    delete s3;

    Student s6 = s1;
    s6.display();
}