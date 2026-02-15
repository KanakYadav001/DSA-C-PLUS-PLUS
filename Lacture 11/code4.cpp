#include <iostream>
#include <vector>

using namespace std;


int main(){

    vector<int> nums = {2,2,2,1,1};
    int n = nums.size();
    int digit;

    for(int val : nums ){
        int feq =0;
        for(int ele : nums){
            if(ele==val){
                feq++;
            }
        }
        if(feq>n/2){
            digit = val;
            break;
        }

    }



    cout << digit << "\n";



    return 0;
}