#include<iostream>
using namespace std;

void mergeSort(int arr[], int si, int ei){

    if(si>=ei){
        return;
    }
    int mid = (si + ei)/2 ;

    mergeSort(arr, si, mid);
    for(int i=si; i <= mid-si; i++){
        for(int j=si; j <= (mid-si)-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    mergeSort(arr, mid + 1, ei); 
    for(int i=0; i <= ei-(mid+1); i++){
        for(int j=0; j<= ei-(mid+1); j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}