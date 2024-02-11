#include<iostream>
using namespace std;

//template<typename T>
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        next = NULL;
    }
};

//template<typename T>
class Stack{
    Node *head;
    int size;

    public:
    Stack(){
        head = NULL;
        size = 0;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void push(int element){
        Node *newNode = new Node(element);
        // if(head == NULL){
        //     head = newNode;
        // }
        newNode -> next = head;
        head = newNode;
        size++;
    }
    int pop(){
        if(isEmpty()){
            return INT_MIN;
        }
        int ans = head -> data;
        Node *temp = head;
        head = head -> next; 
        delete temp;
        size--;
        return ans;
    }
    int top(){
        if(isEmpty()){
            return INT_MIN;
        }
        return head -> data;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;
    // cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.getSize() << endl;
}