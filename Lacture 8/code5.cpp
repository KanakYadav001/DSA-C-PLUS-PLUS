#include <iostream>

using namespace std;


int findIndex(int arr[] , int size ,int n){
 for(int i=0 ;i<size ;i++){
   
    if(arr[i] == n){
       
        return i ;
    }
}

return -1 ;
}


int main(){

  int n =60 ;
   int size = 5 ;
  int arr[size] = {20,70,30,10,60};
   
  int index = findIndex(arr,size,n);
   

  if(index == -1){
      cout << "Number Not Found " << "\n";
  }
  else {
    cout << "Number Found ON "<<  index << " index" ;
      }


    return 0;
}