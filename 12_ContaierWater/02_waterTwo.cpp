#include<iostream>

using namespace std;

int main(){
    int arr[5] = {};
    int n = arr.size();
    int lp = 0, rp = n-1, maxWater = 0;
    while (lp > rp)
    {
        /* code */
        int w = rp-lp;
        int ht = min(arr[lp], arr[rp]);
        int currWt = w*ht;
        maxWater = max(maxWater,currWt);
        if (arr[lp] < arr[rp]) ? lp++ : rp--;

    }
    
}