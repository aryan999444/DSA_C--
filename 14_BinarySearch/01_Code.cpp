#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> arr, int tar){
    int st = 0, end = arr.size()-1;
    // cout << "Function called" << endl;
    while (st <= end)
    {
        int mid = st + (end - st)/ 2;
        if (tar > arr[mid])
        {
            st = mid + 1;

        }else if(tar < arr[mid])
        {
            end = mid - 1;
        }else{
            return mid; // return the index of target
        }
        
    }
    return -1; // target not found
    
}


// Recursive binary search

//  start and end value is necessary for a recursive search 
int recBinarySeaech(vector<int> arr, int tar, int st, int end){
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if(tar > arr[mid]){
            return recBinarySeaech(arr, tar, mid+1, end);
        }else if (tar < arr[mid])
        {
            return recBinarySeaech(arr, tar, st, mid-1);
            /* code */
        } else{
            return mid; // return the index of target
        }
        
    }
    return -1; // target not found
    
}


int main() {
    vector<int> nums = {-1,0,3,6,9,12,15}; // odd array
    int tar1 = 12;
    // cout << "Binary search algo target found on index :- " << binarySearch(nums, tar1) << endl;
    cout << "Binary search algo target found on index :- " << recBinarySeaech(nums, tar1, 0, nums.size()-1) << endl;

    // vector<int> nums2 = {-1,0,2,4,6,8};
    // int tar2 = 0;

    return 0;
}
