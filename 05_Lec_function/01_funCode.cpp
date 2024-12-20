#include<iostream>
using namespace std;

int sum(int x, int y){
    return x + y;
}

int minOfTwo(int x, int y){
    return (x < y)? x : y;
}

int Fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}




int main(){
    cout << Fact(5)<<endl;
    cout << "Exicuted...!";
    return 0;
 }
