#include <iostream>

using namespace std; 


int checkUnique(int arr[], int size){
    int num =0 ;

  for(int i=0 ; i<size ; i++){
    num ^= arr[i];
  }

  return num ;
}

int main(){
     int size =5;
    int arr[size] = {5,3,4,3,4};
    
    int val = checkUnique(arr , size );

    cout << val << "";

    return 0 ;
}