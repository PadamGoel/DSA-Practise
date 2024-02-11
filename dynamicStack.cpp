#include<iostream>
using namespace std;

class DynamicStack{
    int *data;
    int nextIndex;
    int capacity;

    public:
    DynamicStack(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        if(nextIndex == 0){
            return true;
        }
        else{
            return false;
        }
    }
    void push(int element){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
            for(int i=0; i<capacity; i++){
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int top(){
        if(isEmpty()){
            cout << "Stack is Empty " << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
    int pop(){
        if(isEmpty()){
            cout << "Stack is Empty " << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex]; 
    }
};

int main(){
    DynamicStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << s.top() << endl;
    cout << s.top() << endl;

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.size() << endl;
}