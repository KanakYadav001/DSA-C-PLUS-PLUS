#include <iostream>


using namespace std;


void CheckArrays(int arr1[] , int arr2[] , int size){
  
    for(int i=0 ;i<size ;i++){
        for(int j =0 ; j<size ;j++){
         if(arr1[i]==arr2[j]){
            cout << "Common  Values : " << arr1[i] << "\n" ;
         }
        }
    }

}



int main(){

  
    int size =5 ;
    int arr1[size] = {2,5,6,4,3};
    int arr2[size] = {5,10,9,2,8};
 
  CheckArrays(arr1,arr2,size);
 
    return 0 ;
}