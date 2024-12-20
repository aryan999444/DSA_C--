#include<iostream>

using namespace std;

int main(){
    int sum = 0;
    int product = 1;
    int arr[] = {2,4,5};
    for(int val : arr){
        sum += val;
        product *= val;
    }
        cout << "Sum of array is : "<< sum << "\nProduct of the array is : " << product << endl;
    return 0;
}