#include<iostream>
using namespace std;

// method for sum of digits of numbers

int sumOfDigits(int num){
    int sum = 0;
    while(num!= 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}


int main(){
    cout << sumOfDigits(143) << endl;
    cout << "Exicuted...!";
} // namespace std;int main
