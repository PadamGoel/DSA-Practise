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

node *insertNode(node *head, int i, int data){
    node *newNode = new node(data);

    if(i == 0){
        newNode -> next = head;
        head = newNode;
        return head;
    }
    int count = 0;
    node *temp = head;
    while(temp != NULL && count < i-1){
        temp = temp -> next;
        count++;
    }
    if(temp != NULL){
        node *c = temp -> next;
        temp -> next = newNode;
        newNode -> next = c;
    }
    return head;
}

void print(node *head){

    node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " " ;
        temp = temp -> next;
    }
}

int main(){

    node *head = takeInput_Better();
    print(head);

    int i, data;
    cin >> i >> data;
    head = insertNode(head, i, data);
    print(head);
}