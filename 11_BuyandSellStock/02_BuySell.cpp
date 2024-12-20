#include<iostream>

using namespace std;

int main(){
    int prices[] = {2,5,6,8,4,6};
    int mp = 0, bestBuy = prices[0];
    for(int i=1; i< 6; i++){
        if (prices[i] > bestBuy)
        {
            mp = max(mp, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
        
    }
    cout << "Maximum Profit: " << mp << endl;
    return mp;
}