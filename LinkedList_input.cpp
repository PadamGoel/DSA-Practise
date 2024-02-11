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
    while(data != -1){
        node *newNode = new node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            node *temp = head;
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = newNode;
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

    node *head = takeInput();
    print(head);
}