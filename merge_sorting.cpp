#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int ans[]){

    int i=0, j=0, k=0;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            ans[k] = arr1[i];
        
        i++;
        k++;
        }

        else{
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }

    for(int t=0; t<(n+m); t++){
        cout << ans[t] << " ";
    }
}

int main(){

    int n;
    cin >> n;
    int p1[n];

    int m;
    cin >> m;
    int p2[m];

    int ans[n + m];

    merge(p1, n, p2, m, ans);

}