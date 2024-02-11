#include<iostream>
using namespace std;

int find(int arr[], int size, int x, int output[]){

    if(size == 0){
        return 0;
    }

    int ans = find(arr + 1, size - 1, x, output);

    for(int i=0; i<size; i++){
        if(arr[i]==x){
            
        }
    }
}