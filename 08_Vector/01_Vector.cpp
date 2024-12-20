#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec = {1,2,3,4,5,6,7,8};
    cout << vec[0];
    for(int i : vec){ // for each loop
        cout << i << endl;
    }
    return 0;
}