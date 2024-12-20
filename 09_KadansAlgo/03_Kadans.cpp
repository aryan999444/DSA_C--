#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int num : arr) {
        currentSum += num;
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10};
    int result = maxSubarraySum(arr);
    cout << "Maximum subarray sum: " << result << endl;
    return 0;
} 