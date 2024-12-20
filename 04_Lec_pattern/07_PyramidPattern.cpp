#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter numbers of lines :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // Spaces (n-i-1)
        for (int j = 1; j < n-i-1; j++)
        {
            cout << " ";
        }
        // nums : i + 1
        for (int k = 0; k <= i+1; k++)
        {
            /* code */
            cout << k;
        }
        for (int l = i; l> 0; l--)
        {
            /* code */
            cout << l;
        }
        cout << endl;
        
        
    }
    
    return 0;
}