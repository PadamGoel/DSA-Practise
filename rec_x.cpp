#include<iostream>
using namespace std;

// int find( int arr[], int size, int x){
    
//     if(size == 0){
//         return -1;
//     }

//     if(arr[0] == x){
//         return 0;
//     }
    
//     int so = find(arr + 1, size - 1 , x );
//     if(so==-1){
//         return -1;
//     }
//     return so + 1;
    
// }

int find(int arr[] ,int index, int size, int eleToFind, int ans[], int indexAns){
    if(index == size){
        return 0;
    }
    if(arr[index]==eleToFind){
        // ans[indexAns] = index;
        int num = find(arr,index+1,size,eleToFind, ans, indexAns+1);
        ans[num] = index;
        return num+1; 
    }
    return find(arr, index+1,size, eleToFind, ans, indexAns);
}

int main(){
    int n;
    cin >> n;

    int * p = new int[n];
    int *ans = new int[n];
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    int x;
    cin >> x;

    int k = find(p ,0, n , x,ans,0);
    for(int i = 0;i<k;i++){
        cout<<ans[i]<<" ";
    }
}