#include<iostream>
using namespace std;

int Fact(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f *= i;
    }
    return f;
}

int ncr(int n, int r){
    // return Fact(n) / Fact(r) * Fact(n-r);
    int factorial_n = Fact(n);
    int factorial_r = Fact(r);
    int fact_nmr = Fact(n-r);

    return factorial_n / (factorial_r * fact_nmr);
}


int main(){
    cout << " Binomial cofficient of number :- " << ncr(8, 2) ;
}