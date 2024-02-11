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

node *takeInput_Better(){
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while(data != -1){
        node *newNode = new node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
            //OR
            // tail = tail -> next
        }
        cin >> data;
    }
    return head;
}
void print(node *head){

    node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " " << endl;
        temp = temp -> next;
    }
}

int main(){

    node *head = takeInput_Better();
    print(head);
}