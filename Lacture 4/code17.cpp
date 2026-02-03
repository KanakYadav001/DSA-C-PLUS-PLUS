#include <iostream>

using namespace std;


int main(){

  int n =4;

  for(int i = 0 ; i<n ;i++){
   
    for(int j =0  ; j <n-i-1 ; j++){
        cout << " " ;
    }
        cout << "*" ;
   
    for(int l = 1 ; l<=2*i-1 ;l++){
            cout << " " ;
    }
   for(int k = 0  ; k<1 ; k++){
       if(i==0){
        cout << "";
       }
       else {
        cout << "*";
       }
    }

    cout << "\n";
  }
 
  for(int i =0 ; i<n-1 ;i++){

   for(int j = 0 ;j<i+1 ;j++){
     cout << " "; 
   }

   
    cout << "*";
   

   for(int l = 0 ; l<2*(n-2-i)-1 ; l++){
         cout << " " ;
   }

    for(int k=0 ; k<1 ; k++){
     if(i==n-2){
        cout << "";
     }
     else {
        cout << "*";
     }
   }

   cout << "\n";

  }

    return 0;
}