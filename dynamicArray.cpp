#include<iostream>
using namespace std;

class dynamicArray{
    int *data;
    int nextIndex;
    int capacity;

    public:

    dynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    void add(int element){
        if(nextIndex == capacity){
            int *newData = new int[2 * capacity];
            for(int i=0; i < capacity; i++){
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i){
        if(i < nextIndex){
            return data[i];
        }
        else{
            return -1;
        }
    }

    void print(){
        for(int i=0; i<nextIndex; i++){
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    dynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();

}