#include <iostream>

using namespace std;


int main(){

 int n=4 ;

 for(int i = 0 ;i<n;i++){
    for(int j=0 ;j<i+1 ;j++){
        cout << "*" ;
        
    }
    for(int k=0 ; k<=n-i-2 ; k++){
            cout << "  ";
        }
    
    // for(int j =0 ; j<=n-i-2 ;j++){
    //     cout << " ";
    // }
    for(int k = 0 ;k<i+1 ;k++){
        cout << "*";
    }
 

    cout << "\n";
     
 }

 for(int i = 0 ; i<n ;i++){

    for(int j = 0 ; j<n-i ;j++){
        cout << "*";
    }
    for(int k=0 ; k<i ;k++){
        cout << "  ";
    }
    for(int j = 0 ; j<n-i ;j++){
        cout << "*";
    }
    cout << "\n";
    
 }
 
   


    return 0;
}