#include <iostream>

using namespace std;


void SumProduct(int arr[], int size){

    int sum = 0;
    int product = 1 ;

    for(int i=0 ;i<size ;i++){
        sum += arr[i];
        product *= arr[i];
    }


    cout <<"Total Sum is "<< sum << "\n" << "Total product is " << product << "\n";

    
}


int main(){
 int size =5;
 int arr[size] = {3,6,4,9,7};


 SumProduct(arr,size);




    return 0;
}