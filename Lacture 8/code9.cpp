#include <iostream>

using namespace std;

void FindUnique(int arr[] , int size){
     
    for(int i =0; i<size ;i++){
      int count =0 ;
        for(int j=0 ;j<size ;j++){
           if(arr[i]==arr[j]){
            count ++;
           }
          
        }
         if(count==1){
            cout << arr[i];
           }
    }

}



int main(){

    int size =5;
    int arr[5] = {2,3,3,8,6};

    FindUnique(arr,size);


return 0;
}