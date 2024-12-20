#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1 ; j < n; j++)
        {
            if (nums[i]+nums[j] == target)
            {
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                return ans;
            }
            
        }
        
    }
    return ans;
}


vector<int> parSumTwoPointer(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int i = 0;
    int j = n-1;
    while (i < j)
    {
        int pairsum = nums[i]+nums[j];
        if (pairsum > target)
        {
            j--;
        } else if (pairsum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
    }
    
}


int main(){
    vector<int> nums = {2,7,11,15};
    

}