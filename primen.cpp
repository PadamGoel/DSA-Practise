#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    bool divided=false;
    for(int d=2; d<n; d++){
        if(n%d == 0){
            divided = true; 
            
            cout << "not" << endl ;
        }
        else{
            cout << "prime" << endl;
        }
    }
    // if(divided){
    //     cout<< n <<  " is not prime";
    // }
    // else{
    //     cout<< n << " is prime";
    // }
}