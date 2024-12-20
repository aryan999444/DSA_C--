#include<iostream>

using namespace std;

int LinearSearch(int arr[], int n, int target){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,5,64,55,66,8,4,6,2};
    int n = sizeof(arr)/sizeof(int);
    int target = 56;
    cout << "LinearSearch result on index : " << LinearSearch(arr, n, target) << endl;

}