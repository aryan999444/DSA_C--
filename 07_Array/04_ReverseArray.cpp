#include<iostream>
using namespace std;

// Function for reverse an array
int ReverseArr(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n = sizeof(arr1)/sizeof(int);
    
    ReverseArr(arr2, n);
    for(int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    
}