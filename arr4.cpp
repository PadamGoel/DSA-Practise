#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    
    int input[100];

    for(int i=0; i<n; i++){
        cin >> input[i];
    }

    int x;
    cin >> x;

    
    bool condition = false;
    for(int i=0; i<n; i++){
        if( input[i] == x){
            condition= true;
            cout << i << endl;
            cout << input[i] << endl;
            
        }
    }
        if(!condition){
            cout << "-1" ;
        }
    }
