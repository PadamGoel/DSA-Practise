#include<iostream>
using namespace std;

template<typename T>
class node{
    T data;
    node *next;

    public:
    node(T data){
        this -> data = data;
        next = NULL;
    }
};

template<typename T>
class Queue{
    node<T> *head;
    node<T> *tail;
    int size;

    public:
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void enqueue(T element){
        node<int> *newNode = new node<int>(element);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
        tail -> next = newNode;
        tail = newNode;
        }
        size++;
    }

    T dequeue(){
        int ans = head -> data;
        node *temp = head;
        head = head -> next;
        delete temp;
        size--;
        return ans;
    }
};