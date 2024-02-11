#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n){

    for(int j=0; j<n-1; j++){
        int min = arr[j], minIndex = j;
        for(int i=j+1; i<n-1; i++){
            if(arr[i] < min){
                min = arr[i];
                minIndex = i;
            }
        }

        int temp = arr[j];
        arr[j] = min; // min -> arr[minIndex]
        arr[minIndex] = temp;
    }
}

int maxValue(int arr[], int n){
    int max = INT_MIN, maxIndex = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << max << maxIndex;
    return max, maxIndex;
}

int main(){
    int n;
    cin >> n;
    int input[100];

    for(int i=0; i<n; i++){
        cin >> input[i];
    }

    selectionSort(input , n);
    printArray(input , n);
    maxValue(input , n);
}