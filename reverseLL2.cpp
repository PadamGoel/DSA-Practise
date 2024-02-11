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

class Pair{
    public:
    node *head;
    node *tail;
};

Pair reverseLL_2(node *head){
    if(head == NULL || head -> next == NULL){

        Pair ans;
        ans.head = head;
        ans.tail = head;

        return ans;
    }

    Pair smallAns = reverseLL_2(head -> next);

    smallAns.tail = head;
    head -> next = NULL;
    Pair ans;
    ans.head = smallAns.head;
    ans.tail = head;
    return ans;
}

node *reverseLL_Better(node *head){
    return reverseLL_2(head).head;
}