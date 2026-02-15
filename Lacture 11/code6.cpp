#include <iostream>
#include <vector>

using namespace std;


int main(){


    vector<int>nums = {1,2,2,2,1,2,1};


    int feq =0 ;
    int ans =0;


    for(int i=0;i<nums.size();i++){
        if(feq==0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            feq++;
        }
        else{
            feq--;
        }

    }

 cout << ans << " ";


    return 0;
}