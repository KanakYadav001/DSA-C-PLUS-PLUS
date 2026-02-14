#include <iostream>
#include <vector>

using namespace std;
int main(){
  
    int size =5;
    int arr[size] = {2,6,7,3};
    int num1,num2;
    int target = 10;
    for(int i =0 ; i<size ;i++){
        for(int j=i+1 ;j<size ;j++){
            if(arr[i]+arr[j]== target){
            num1 = arr[i];
            num2 = arr[j];
            }
        }
    }



  cout << "There are 2 nums is of " << target << " is " << num1 <<" and " << num2 << "\n";




    return 0;
}


