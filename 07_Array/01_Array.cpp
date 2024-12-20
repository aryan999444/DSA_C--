#include<iostream>

using namespace std;

int main(){

    int marks[] = {15,25,63,55,45};
    int size = sizeof(marks)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout << "Arrays elemenst are : " << marks[i] << endl;
    }
    
    
    
    
    
    
    
    // for(auto i: marks){
    //     cout << i << " ";
        
    // }
    
    // cout << marks[4] << endl;

    return 0;
}