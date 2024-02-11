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
        tail -> next = newNode;
        tail = newNode;
        cin >> data;
    }
    return head;
}

node *insertNode(node *head, int i){
    int data;
    cin >> data;
    node *newNode = new node(data);

    if(i == 0){
        newNode -> next = head;
        head = newNode;
        return head;
    }

    int count = 0;
    node *temp = head;
    while(count < i-1){
        temp = temp -> next;
        count++;
    }
    node *x = temp -> next;
    temp -> next = newNode;
    newNode -> next = x;

    return head;
}

void mid(node *head){
    node *slow = head;
    node *fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    cout << slow -> data << endl;
    return;
}

node *deleteNode(node *head, int i){
    if(i == 0){
        node *temp = head;
        head = head -> next;
        delete temp;
        return head;
    }

    int count = 0;
    node *temp = head;
    while(count < i-1){
        temp = temp -> next;
        count++;
    }   
    node *a = temp -> next;
    node *b = a -> next;
    temp -> next = b;
    delete a;

    return head;
}

void reverseLL(node *head){
    
}