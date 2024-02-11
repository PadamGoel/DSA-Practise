#include<iostream>
#include<cstring>
using namespace std;

class Student{

    int age;
    char *name;

    public:

    Student(int age, char *name){
        this -> age = age;

        // Shallow copy
        //this -> name = name;

        // Deep copy
        this -> name = new char[strlen(name) + 1]; // yahan par basically ek new array bana rahe hai aur jo humne name dena hai apne object ke name data type 
        strcpy(this -> name, name);
    }

    void display(){
        cout << age << " " << name << endl;
    }
};

int main(){

    char name[] = "abcd";

    Student s1(18, name);
    s1.display();

    name[3] = 'e';
    Student s2(20, name);
    s2.display();

    s1.display();

}