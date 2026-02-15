#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

 vector<int> nums = {1,2,2,2,2,1};

 sort(nums.begin(),nums.end());

 int n = nums.size();
 int feq=1;
 int ans = nums[0];
 
 for(int i=1;i < n;i++){
     if(nums[i] == nums[i-1]){
        feq++;
     }
     else {
        feq=1;
     }

     if(feq>n/2){
      ans = nums[i];
     }
 }

cout << ans << " ";

    return 0;
}