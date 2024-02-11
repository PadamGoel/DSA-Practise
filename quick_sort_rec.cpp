#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int arr[], int si, int ei, int size){
    int pivot = arr[si];
    int count = 0;
    for(int i=si+1; i<=ei; i++){
        if(pivot < arr[i]){
            count++;
        }
    }
    cout << count << endl;
    swap(&arr[si], &arr[si + count]);

    while( si < (si + count) && ei > (si + count)){

        if(arr[si] < pivot){
            si++;
        }

        else if( arr[ei] > pivot){
            ei--;
        }

        else{
            swap(&arr[si], &arr[ei]);
            si++;
            ei--;
        }
    }
     return si + count;
}
void quickSort(int arr[], int si, int ei, int size){
    int s = si;
    int e = ei;

    if(si >= ei){
        return;
    }

    int pivot = partition( arr, si, ei, size);
    quickSort(arr, si, pivot-1, size);
    quickSort(arr, pivot+1, ei, size);
}
void printArray(int arr[], int si, int ei, int size){
    for(int i=0; i<=ei; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cin >> n;

    int arr[n];

    int si, ei;
    cin >> si >> ei;
    
    partition(arr, si, ei, n);
   
    printArray(arr, si, ei, n);
     quickSort(arr, si, ei, n);
}