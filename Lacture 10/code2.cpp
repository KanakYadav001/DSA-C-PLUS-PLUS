#include <iostream>
#include <climits>
using namespace std;


int main(){
 
    int size =7;
    int arr[size] = {3,-4,5,4,-1,7,-8};
    int maxNum = INT_MIN;
    for(int st=0;st<size;st++){
     int curentSUm = 0;
        for(int end=st ; end < size ;end++){
              curentSUm += arr[end];
              maxNum  = max(curentSUm,maxNum);
        }
    }


  cout << "Max Subarray sum is  : " << maxNum << "\n";


    return 0;
}