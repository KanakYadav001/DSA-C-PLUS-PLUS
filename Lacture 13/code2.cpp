#include <iostream>
#include <climits>


using namespace std;

int main(){
   int size = 6;
    int arr[size] = {7,1,5,3,6,4};
    int maxprofit =0;
    int bestBuy = INT_MAX;
    for(int i=0 ; i<size ;i++){
        if(bestBuy>arr[i]){
            bestBuy = arr[i];
        }
        int profit = arr[i] - bestBuy;

        if(profit > maxprofit){
            maxprofit = profit;
        }
    }


    cout << "Total profit is " << maxprofit << "";
    return 0;
}