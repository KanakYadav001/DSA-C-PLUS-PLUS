#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> nums = {2,5,3,8,9};
  int target= 10;
  int i=0;
  int j=nums.size()-1;
  vector<int> ans;
  while(i<j){
    if(nums[i]+nums[j]==target){
         ans.push_back(i);
         ans.push_back(j);
         break;
    }
    if(nums[i]+nums[j]>target){
        j--;
    }
    else{
        i++;
    }
  }


  for(int val:ans){
    cout << val << " ";
  }
    


    return 0;
}