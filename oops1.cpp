#include<iostream>
using namespace std;
class Student{

    public :

    int rollNumber;
    int age;

    private:

    int password;

    public:

    void display(){
        cout << rollNumber << " " << age << endl;
        // cout << password << endl;
    }

    int getPassword(){
        return password;
    }

    void setPassword(int p){
        if(p != 123){
            cout << "Invalid Password" << endl;
            return;
        }
        password = p;
        cout << password << endl;
        
    }
};

int main(){

    Student s1;
    s1.rollNumber = 38;
    s1.age = 18; 
    s1.setPassword(12);
    s1.display();


    Student *s2 = new Student;
    (*s2).rollNumber = 39;
    (*s2).age = 17;
    s2 -> getPassword(); 
    (*s2).display();

}