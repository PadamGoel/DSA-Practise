#include<iostream>
using namespace std;

class node{

    public:

    int data;
    node *next;

    node(int data){
        this -> data = data;
        next = NULL;
    }
};

void print(node *head){

    node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " " << endl;
        temp = temp -> next;
    }
}

int main(){

    //Statically
    /*node n1(1);
    node *head = &n1;

    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
*/
    //Dynamically
    node *newNode = new node(1);
    node *head = newNode;

    node *newNode1 = new node(2);

    newNode -> next = newNode1;

    print(head);
}