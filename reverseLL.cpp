#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node *next;

    node(int data){
        this -> data = data;
        next =NULL;
    }
};

node *reverseLL(node *head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    node *smallAns = reverseLL(head -> next);

    node *temp = smallAns;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = head;
    head -> next = NULL;
    return smallAns;
}

node *takeInput(){
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
        }
        cin >> data;
    }
    return head;
}

void print(node *head){

    node *temp =head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return;
}

int main(){
    node *head = takeInput();
    print(head);
    
    print(reverseLL(head));
}