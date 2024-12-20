#include<iostream>
using namespace std;
#include<vector>



int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8};
    int n = nums.size();

    for(int val : nums) {
        int freq = 0;
        for(int el : nums) {
            if(el == freq){
                freq++;
            }
            if (freq > n/2)
            {
                // return val;
                cout << "The majority element is: " << val << endl;
                return 0;
            }
            
    }
}
}