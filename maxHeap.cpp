#include<iostream>
#include<vector>
using namespace std;

class PriorityQueue{
    vector<int> pq;

    public:
    int getSize(){
        return pq.size();
    }

    bool isEmpty(){
        return pq.size() == 0;
    }

    int getMax(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }

    void insert(int element){
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while(childIndex > 0){
            int parentIndex = (childIndex - 1) / 2;

            if(pq[childIndex] > pq[parentIndex]){
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[childIndex];
                pq[childIndex] = temp;
            }
            else{
                break;
            }
            childIndex = parentIndex;
        }
    }

    int removeMax(){
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();

        int parentIndex = 0;
    }
};

int main(){
    PriorityQueue p;

    p.insert(100);
    p.insert(10);
    p.insert(15);
    p.insert(4);
    p.insert(17);
    p.insert(21);
    p.insert(67);

    cout << p.getSize() << endl;
    cout << p.getMax() << endl;
}