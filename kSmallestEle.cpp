#include<iostream>
#include<queue>
using namespace std;

void kSmallestElements(int input[], int n, int k){
    priority_queue<int> pq;

    for(int i=0; i<k; i++){
        pq.push(input[i]);
    }

    for(int i=k; i<n; i++){
        if(pq.top() > input[i]){
            pq.push(input[i]);
            pq.pop();
        }
    }
    int j=0;
    while(!pq.empty()){
        input[j] = pq.top();
        pq.pop();
        j++;
    }
}

int main(){
    int input[] = {5,6,9,12,3,13,2};
    int k = 3;
    kSmallestElements(input, 7, k);

    for(int i=0; i < k; i++){
        cout << input[i] << " ";
    }
}