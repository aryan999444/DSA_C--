#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            
        }
        
    }
    
}

// ********Selection Sort***********
void selsctionSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int min_idx = i; // 
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
            
        }
        swap(arr[i], arr[min_idx]);
    }
    

}

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}



int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};
    // bubbleSort(arr, n);
    selsctionSort(arr, n);

    cout << "selection sorting :- ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

  
    return 0;
} 
