#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int j=0; j<n-1; j++){
    int min = arr[j] , minIndex = j;
    for(int i=j+1; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }
    //SWAP
    int temp = arr[j];
    arr[j] = min;
    arr[minIndex] = temp;
}

}
int main(){

    int n;
    cin >> n;

    int input[100];
    for(int i=0; i<n; i++){
        cin >> input[i]; 
    }

     selectionSort(input , n);
     for(int i=0; i<n; i++){
        cout << input[i] << " ";
     }
    
}