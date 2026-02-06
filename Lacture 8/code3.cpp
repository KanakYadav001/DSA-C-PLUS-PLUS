#include <iostream>



using namespace std;

int main(){


    int size =5 ;
    int arr[size] = {2,5,6,4,9};

int greater = INT8_MIN ;
int smallest = INT8_MAX ;

    for(int i=0;i<size;i++){
       smallest = min(arr[i],smallest);
       greater = max(arr[i],greater);

        
    }

    cout << greater << "\n";
    cout << smallest << "\n";


    return 0;
}