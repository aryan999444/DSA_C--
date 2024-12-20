#include<iostream>
using namespace std;

int main() {

    // int a = 8; // Binary representation of 8 is 1 0 0 0
    // cout << "a << 2 = " << (a << 2);
    // // Left shift means appending numbers of 0’s to the right. 
    // //1 0 0 0 0 0 = 32
    // return 0;
    // int a = 2;
    // int b = 4;
    // int c = a ^ b;

    // int a = 1, * b; //Here b is a pointer operator of int type
    // b = & a;
    // cout << "Address of variable a: " << b << endl;
    // cout << "Address of variable b: " << & b;
    // return 0;
    int a = 10, b = 20, c = 30;
    if (a <= b && !b) {
        cout << "hello";
    } else if (c >= a && c >= b) {
        cout << "hi";
    } else {
        cout << "hey";
    }
}