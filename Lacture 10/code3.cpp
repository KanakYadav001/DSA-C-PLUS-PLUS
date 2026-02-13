#include <iostream>
#include <climits>

using namespace std;



int main(){
 int size = 7;
 int arr[size] = {3,-4,5,4,-1,7,-8};
 int MaxSum = INT_MIN;
 int arrSum = 0; 
 for(int i=0 ; i<size ;i++){ 
     arrSum += arr[i];
     MaxSum = max(arrSum,MaxSum);
     if(arrSum<0){
        arrSum = 0;
     }
 }
 
 cout << "The Maxinum sum is   : " << MaxSum << " " ;  
  

    return 0;
}