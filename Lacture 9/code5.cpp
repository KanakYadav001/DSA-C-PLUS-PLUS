#include <iostream>

using namespace std;

int FindNum(int arr[], int size , int FindNum){
   for(int i =0 ; i<size ; i++){
    if(arr[i] == FindNum){
        return i;
    }
   }
}

int main()
{
    int size = 5;
    int findNum = 8; 
    int arr[size] = {2, 5, 8, 9, 5};
  

    int Position = FindNum(arr , size , findNum);


    cout << "Your Number is on " << Position << " Position";
    

        return 0;
}