#include<iostream>
using namespace std;

inline int max(int m, int n){
    return (m > n) ? m : n; 
}

int summing(int a[], int size , int si){
    int sum = 0; 
    for(int i= si; i<size; i++){
        sum = sum + a[i];
    }
            return sum;

}

int main(){
  int a, b;
  cin >> a >> b ;

  int c = max(a,b);
  cout << c<< endl;

  int n;
  cin >> n;

  int * p = new  int[n];

  for(int i= 0; i < n; i++){
    cin >> p[i];
  }

  cout << summing(p , n , 2) << endl;

}