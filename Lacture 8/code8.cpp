#include <iostream>
#include <climits>
using namespace std;

void SwapMinMax(int arr[] , int size){
   int minNumber =INT_MAX;
   int maxNumber = INT_MIN;

   int minIndex = 0;
   int maxindex =0 ;
   
   for(int i=0; i<size ; i++){
        if(minNumber > arr[i]){
            minNumber = arr[i];
            minIndex = i ;
        }
        if(maxNumber < arr[i]){
            maxNumber = arr[i];
            maxindex = i;
        }

   }

   swap(arr[minIndex],arr[maxindex]);


   


}

int main(){


    int size =5 ;

    int arr[size] = {7,4,2,27,6} ;


    SwapMinMax(arr,size);
     
    for(int i=0 ;i<size;i++){
        cout << arr[i] << " " ;
    }
    


    return 0;
}