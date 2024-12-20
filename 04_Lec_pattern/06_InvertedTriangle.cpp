#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter numbers of lines :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // spaces 
       for (int j = 0; j < i; j++)
       {
        /* code */
        cout<< " ";
       }
    //    numbers print 
       for (int j = 0; j < n-i; j++)
       {
        cout<< (i+1) ;
       }
       cout << endl;
       
    }
    
}