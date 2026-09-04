#include<iostream>
using namespace std;

int BinaryToDecimal(int x){

    int remainder, ans =0; 
    int power = 1;

    while(x>0){

        remainder = x%10;
        ans += remainder*power;
        x = x/10;
        power = power*2;
    }

    return ans;
}

int main(){

    int InputNum;

    cout << "Enter the binary code you want to convert to decimal code: ";
    cin >> InputNum;

    cout << "The answer of your " << InputNum << "is: " << BinaryToDecimal(InputNum);

    return 0;
}