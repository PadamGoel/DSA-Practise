#include<iostream>
#include<cstring>
using namespace std;

class Student{

    int age;

    public:
    char *name;

    public:
    Student(int age, char*name){
        
        this -> age = age;
        this -> name = new char[strlen(name) + 1];
        strcpy(this -> name, name);
    }

    void display(){
        cout << age << " " << name << endl;
    }

    // Copy Constructor
    Student(Student const &s1){
        age = s1.age;
        name = new char[strlen(s1.name) + 1];
        strcpy(name, s1.name);
        
    }    
};

int main(){

    char name[] = "abcd";
    Student s1(18,name);
    s1.display();

    Student s2(s1);
    s2.name[0] = 'x';
    s2.display();

    s1.display();
}