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

node *reverseLL_3(node *head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    node *smallAns = reverseLL_3(head -> next);

    node *tail = head -> next;
    tail -> next = head;
    head -> next = NULL;
    return smallAns;
}