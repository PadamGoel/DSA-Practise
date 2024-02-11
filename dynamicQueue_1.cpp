#include<iostream>
using namespace std;

template <typename T>
class DynamicQueue{
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

    public:
    DynamicQueue(){
        data = new T[5];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = 5;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    // insert element
    void enqueue(T element){
        if(nextIndex == capacity){
            T *newData = new T[2*capacity];
            for(int i=0; i < capacity; i++){
                newData[i] = data[i];
            }
            delete []data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
        if(firstIndex == -1){
            firstIndex = 0;
        }
        size++;
    }

    T dequeue(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex++;
        size--;
        return ans;
    }

    T front(){
         if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return data[firstIndex];
    }
};

int main(){
    DynamicQueue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    
    cout << q.front() << endl;

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    cout << q.front() << endl;
    cout << q.getSize() << endl;
}