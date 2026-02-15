#include <iostream>
#include <vector>

using namespace std;

vector<int> findPair(vector <int> nums,int target){

    int n = nums.size();
    vector<int> ans;

    for(int i=0 ;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
        }
    }
    
}

int main(){


    vector<int> nums = {2,4,5,6};
    int target =7;

    vector<int> ans = findPair(nums,target);

    for(int val : ans){
        cout << val << " " ;
    }
    



    return 0;
}