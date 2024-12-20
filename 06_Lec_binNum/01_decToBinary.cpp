#include<iostream>

using namespace std;

int DecToBinary(int decNum){
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += rem * pow;
        pow *= 10;
    }
    return ans; // Binary representation answer

}

//  Binary to decimal code here 

int BinToDec(int binNum){
     int ans = 0, pow = 1;

     while(binNum > 0){
        int rem = binNum %10;
        ans += pow * rem;

        binNum /= 10;
        pow *= 2;
     }
     return ans;
}



int main(){
    int decNum ;
    cout << "Enter a decimal number: ";
    cin >> decNum;

    // cout << "Binary representation of " << decNum << " is: " << DecToBinary(decNum);
    cout << "Decimal representation of binary number is: " << BinToDec(decNum) << endl;
    return 0;
}