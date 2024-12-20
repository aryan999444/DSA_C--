#include<iostream>

using namespace std;
int main(){
    int n ;
    cout << "Enter number : " ;
    cin >> n;
    // int nums = 1;
    char Ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
            // cout<< nums << " ";
            cout << Ch << " ";
            Ch++;
            // nums++;
        }
        cout << endl;   
    }
return 0;
}