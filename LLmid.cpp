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
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(node *head){

    node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

node *insertNode(node *head, int i, int data){
    node *newNode = new node(data);

    if(i==0){
        newNode -> next = head;
        head = newNode;
        return head;
    }

    node *temp = head;
    int count = 0;
    while(count < i-1){
        temp = temp -> next;
        count++;
    }
    node *x = temp -> next;
    temp -> next = newNode;
    newNode -> next = x;

    return head;
}

void deleteNode(node *head, int i){

    // if(i == 0){
    //     head = head -> next;

    // }
    node *temp = head;
    int count = 0;
    while(count < i-1){
        temp = temp -> next;
        count++;
    }
    node *a = temp -> next;
    node *b = a -> next;
    temp -> next = b;
    delete a;
    
    return;
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

int main(){

    node *head = takeInput();
    print(head);

    int i , data;
    cin >> i >> data;
    head = insertNode(head, i, data);
    print(head);

    mid(head);


    int k;
    cin >> k;
    deleteNode(head, k);
    print(head);
}